#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QtCore/QTextStream>
#include <QTimer>
#include <QDebug>
#include <QLoggingCategory>
#include <QScrollBar>
#include <QException>
#include <QColorDialog>
#include "about.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLoggingCategory::defaultCategory()->setEnabled(QtDebugMsg, true);
    ui->pushButton_Start->setEnabled(false);
  //  ui->textEdit->setFontWeight(1);
    int fontSize;
    fontSize = ui->horizontalSlider->value();
    ui->textEdit->setFontPointSize(fontSize);
    ui->textEdit->setStyleSheet("color: #550000");
    speed = ui->horizontalSlider_Speed->value();
    ui->label_Speed->setText("Speed: " + QString::number(speed) + " milliseconds");
    ui->label_fontSize->setText("Font Size: " + QString::number(fontSize));
    timer = new QTimer(this);
 // connect(ui->pushButton_Start, SIGNAL(clicked()), this, SLOT(scrollText()));
//   ui->pushButton_Start->installEventFilter(this); // listen for the Clicked Event Filter to scroll text
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_released()
{
    ui->statusbar->showMessage("Open Button Clicked!");
    QTextStream(stdout) << "Open Button Clicked!" << Qt::endl;
    fileName = QFileDialog::getOpenFileName(this,
        tr("Open Text"), "/home/toadwick/Documents", tr("Text Files (*.txt *.csv)"));

    QFile file( fileName );

    if ( file.exists() )
    {
        line = "";
        file.open(QIODevice::ReadOnly);
        QTextStream textStream(&file);
        line = textStream.readAll();
        file.close();
        ui->textEdit->setText(line);
        ui->pushButton_Start->setEnabled(true);
    }
}


void MainWindow::on_pushButton_Start_clicked()
{
    if(ui->pushButton_Start->text() == "Start")
    {
        ui->statusbar->showMessage("Start Button Clicked!");
        ui->pushButton_Start->setText("Pause");
        connect(timer, SIGNAL(timeout()), this, SLOT(scrollText()));
        timer->start(speed);
        return;
    }

    if(ui->pushButton_Start->text() == "Pause")
    {
        ui->pushButton_Start->setText("Start");
        return;
    }
}

void MainWindow::scrollText()
{
    if(ui->pushButton_Start->text() == "Start" || ui->textEdit->verticalScrollBar()->value() >= ui->textEdit->verticalScrollBar()->maximum())
    {
        ui->statusbar->showMessage("Teleprompter Stopped.");
        ui->pushButton_Start->setText("Start");
        Stop();
        return;
    }

    QScrollBar *scrollbar = ui->textEdit->verticalScrollBar();
    ui->textEdit->verticalScrollBar()->setValue(scrollbar->value() + 1);
}

void MainWindow::Stop()
{
    timer->stop();
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    int spos;
    spos = ui->textEdit->verticalScrollBar()->value();
    ui->textEdit->setFontPointSize(value);
    ui->textEdit->setText(line);
    ui->textEdit->verticalScrollBar()->setValue(spos);
    ui->label_fontSize->setText("Font Size: " + QString::number(value));
    QTextStream(stdout) << "Font Size is: " << value << Qt::endl;
}

void MainWindow::on_horizontalSlider_Speed_valueChanged(int value)
{
    speed = value;
    try{
        ui->label_Speed->setText("Speed: " + QString::number(speed) + " milliseconds");
        if(timer)
        {
            timer->stop();
            timer->start(speed);
        }else return;
    }catch(const QException  &e){
        ui->statusbar->showMessage(e.what());
    }
}

void MainWindow::on_actionQuit_triggered()
{
    this->close();
}

void MainWindow::on_actionA_bout_triggered()
{
    About *about;
    about = new About();
    about->show();
}

void MainWindow::on_pushButton_fontColor_released()
{
    QColor color = QColorDialog::getColor(QColor("#550000"), this );
    if( color.isValid() )
    {
      QTextStream(stdout) << "Color Choosen : " << color.name();
      ui->textEdit->setStyleSheet("color:" + color.name());
    }
}

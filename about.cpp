#include "about.h"
#include "ui_about.h"
#include <QDate>

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    QString version = APP_VERSION;
    int year = QDate::currentDate().year();
    if( year == 2020)
    {
        ui->label_copyleft->setText("CopyLeft 2020 by Jack Keifer for Everyone!");
    }else{
        ui->label_copyleft->setText("CopyLeft 2020-" + QString::number(year) + " by Jack Keifer for Everyone!");
    }
    ui->label_Version->setText("Version: " + version);
}

About::~About()
{
    delete ui;
}

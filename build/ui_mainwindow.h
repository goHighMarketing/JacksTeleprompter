/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionA_bout;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_fontColor;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Start;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QSlider *horizontalSlider;
    QLabel *label_fontSize;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QSlider *horizontalSlider_Speed;
    QLabel *label_Speed;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(820, 602);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/resources/Beasley.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/resources/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionA_bout = new QAction(MainWindow);
        actionA_bout->setObjectName(QString::fromUtf8("actionA_bout"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/resources/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionA_bout->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_fontColor = new QPushButton(centralwidget);
        pushButton_fontColor->setObjectName(QString::fromUtf8("pushButton_fontColor"));
        pushButton_fontColor->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        horizontalLayout->addWidget(pushButton_fontColor);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(75, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Start = new QPushButton(centralwidget);
        pushButton_Start->setObjectName(QString::fromUtf8("pushButton_Start"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/resources/text.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Start->setIcon(icon4);
        pushButton_Start->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(pushButton_Start);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, -1, -1);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(8);
        horizontalSlider->setMaximum(50);
        horizontalSlider->setPageStep(11);
        horizontalSlider->setValue(22);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider);

        label_fontSize = new QLabel(centralwidget);
        label_fontSize->setObjectName(QString::fromUtf8("label_fontSize"));

        verticalLayout_3->addWidget(label_fontSize);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, -1, -1);
        horizontalSlider_Speed = new QSlider(centralwidget);
        horizontalSlider_Speed->setObjectName(QString::fromUtf8("horizontalSlider_Speed"));
        horizontalSlider_Speed->setMinimum(10);
        horizontalSlider_Speed->setMaximum(100);
        horizontalSlider_Speed->setValue(60);
        horizontalSlider_Speed->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_Speed);

        label_Speed = new QLabel(centralwidget);
        label_Speed->setObjectName(QString::fromUtf8("label_Speed"));

        verticalLayout_2->addWidget(label_Speed);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 820, 30));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionA_bout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Jack's Teleprompter", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionA_bout->setText(QCoreApplication::translate("MainWindow", "A&bout", nullptr));
        pushButton_fontColor->setText(QCoreApplication::translate("MainWindow", "FontColor", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_Start->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        label_fontSize->setText(QCoreApplication::translate("MainWindow", "Font Size", nullptr));
        label_Speed->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

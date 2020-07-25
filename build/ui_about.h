/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_Version;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_pic;
    QLabel *label_desc;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_clpic;
    QLabel *label_copyleft;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(489, 429);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/resources/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        About->setWindowIcon(icon);
        frame = new QFrame(About);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 471, 411));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 411, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 22));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(22, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_Version = new QLabel(verticalLayoutWidget);
        label_Version->setObjectName(QString::fromUtf8("label_Version"));

        horizontalLayout_2->addWidget(label_Version);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, -1, -1);
        label_pic = new QLabel(verticalLayoutWidget);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setPixmap(QPixmap(QString::fromUtf8(":/res/resources/7.JPG")));

        horizontalLayout_3->addWidget(label_pic);

        label_desc = new QLabel(verticalLayoutWidget);
        label_desc->setObjectName(QString::fromUtf8("label_desc"));

        horizontalLayout_3->addWidget(label_desc);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 20, -1, -1);
        label_clpic = new QLabel(verticalLayoutWidget);
        label_clpic->setObjectName(QString::fromUtf8("label_clpic"));
        label_clpic->setMaximumSize(QSize(12, 16777215));
        label_clpic->setPixmap(QPixmap(QString::fromUtf8(":/res/resources/copyleft.png")));

        horizontalLayout_4->addWidget(label_clpic);

        label_copyleft = new QLabel(verticalLayoutWidget);
        label_copyleft->setObjectName(QString::fromUtf8("label_copyleft"));

        horizontalLayout_4->addWidget(label_copyleft);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "About Jack's Teleprompter", nullptr));
        label_2->setText(QCoreApplication::translate("About", "Jack's Teleprompter", nullptr));
        label_Version->setText(QCoreApplication::translate("About", "Version", nullptr));
        label_pic->setText(QString());
        label_desc->setText(QCoreApplication::translate("About", "<html><head/><body><p><span style=\" color:#00557f;\">Created in C++</span></p><p><span style=\" color:#00557f;\">Qt 5.15.0</span></p><p><span style=\" color:#00557f;\">July 24th, 2020</span></p></body></html>", nullptr));
        label_clpic->setText(QString());
        label_copyleft->setText(QCoreApplication::translate("About", "<html><head/><body><p>CopyLeft 2020 by Jack Keifer for Everyone!</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H

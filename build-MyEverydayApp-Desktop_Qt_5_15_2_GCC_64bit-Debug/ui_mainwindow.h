/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QFrame *frame_3;
    QFrame *frame_4;
    QFrame *frame_5;
    QFrame *frame_7;
    QFrame *frame_6;
    QFrame *frame_8;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 918);
        MainWindow->setMinimumSize(QSize(1280, 800));
        MainWindow->setMaximumSize(QSize(2560, 1440));
        MainWindow->setSizeIncrement(QSize(1, 1));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(1280, 800));
        frame->setMaximumSize(QSize(2560, 1440));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_3, 0, 0, 1, 1);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_4, 0, 1, 1, 1);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_5, 0, 2, 1, 1);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_7, 1, 0, 1, 1);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_6, 1, 1, 1, 1);

        frame_8 = new QFrame(frame);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_8, 1, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMaximumSize(QSize(60, 16777215));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(60, 60));
        pushButton->setMaximumSize(QSize(60, 60));

        verticalLayout_4->addWidget(pushButton);

        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(60, 60));
        pushButton_3->setMaximumSize(QSize(60, 60));

        verticalLayout_4->addWidget(pushButton_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout->addWidget(frame_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addWidget(frame);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MyEverydayApp", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

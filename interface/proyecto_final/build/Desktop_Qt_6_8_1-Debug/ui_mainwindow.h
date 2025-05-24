/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_6;
    QTextEdit *textEdit;
    QPushButton *pushButton_4;
    QChartView *widget_3;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QChartView *widget_2;
    QChartView *widget;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_4;
    QChartView *widget_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1600, 1300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(150, 290, 89, 25));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 20, 221, 201));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(80, 260, 89, 25));
        widget_3 = new QChartView(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(710, 20, 361, 211));
        lcdNumber_3 = new QLCDNumber(centralwidget);
        lcdNumber_3->setObjectName("lcdNumber_3");
        lcdNumber_3->setGeometry(QRect(1060, 20, 71, 211));
        lcdNumber_2 = new QLCDNumber(centralwidget);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setGeometry(QRect(630, 250, 71, 201));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(80, 320, 89, 25));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 290, 89, 25));
        widget_2 = new QChartView(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(259, 250, 361, 201));
        widget = new QChartView(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(259, 20, 361, 201));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(630, 20, 71, 201));
        lcdNumber_4 = new QLCDNumber(centralwidget);
        lcdNumber_4->setObjectName("lcdNumber_4");
        lcdNumber_4->setGeometry(QRect(950, 460, 71, 261));
        widget_4 = new QChartView(centralwidget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(260, 460, 671, 261));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(0, 370, 89, 25));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(150, 370, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1600, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Derecha", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Adelante", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Atras", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Izquierda", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "manual", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "auto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

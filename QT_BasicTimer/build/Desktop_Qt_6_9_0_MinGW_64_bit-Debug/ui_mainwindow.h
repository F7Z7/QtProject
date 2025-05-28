/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startBTn;
    QPushButton *stopBtn;
    QPushButton *resetBtn;
    QLabel *counterLabel;
    QLabel *counterText;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        startBTn = new QPushButton(centralwidget);
        startBTn->setObjectName("startBTn");
        startBTn->setGeometry(QRect(220, 240, 83, 29));
        stopBtn = new QPushButton(centralwidget);
        stopBtn->setObjectName("stopBtn");
        stopBtn->setGeometry(QRect(370, 240, 83, 29));
        resetBtn = new QPushButton(centralwidget);
        resetBtn->setObjectName("resetBtn");
        resetBtn->setGeometry(QRect(510, 240, 83, 29));
        counterLabel = new QLabel(centralwidget);
        counterLabel->setObjectName("counterLabel");
        counterLabel->setGeometry(QRect(240, 150, 301, 61));
        counterText = new QLabel(centralwidget);
        counterText->setObjectName("counterText");
        counterText->setGeometry(QRect(70, 130, 131, 111));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startBTn->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        stopBtn->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        resetBtn->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        counterLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        counterText->setText(QCoreApplication::translate("MainWindow", "counter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCustomPlot *graphPlotter;
    QPushButton *startPlot;
    QPushButton *stopPlot;
    QPushButton *resetPlot;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphPlotter = new QCustomPlot(centralwidget);
        graphPlotter->setObjectName("graphPlotter");
        graphPlotter->setGeometry(QRect(240, 90, 256, 192));
        startPlot = new QPushButton(centralwidget);
        startPlot->setObjectName("startPlot");
        startPlot->setGeometry(QRect(110, 400, 111, 51));
        stopPlot = new QPushButton(centralwidget);
        stopPlot->setObjectName("stopPlot");
        stopPlot->setGeometry(QRect(320, 400, 111, 51));
        resetPlot = new QPushButton(centralwidget);
        resetPlot->setObjectName("resetPlot");
        resetPlot->setGeometry(QRect(500, 400, 111, 51));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startPlot->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stopPlot->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        resetPlot->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

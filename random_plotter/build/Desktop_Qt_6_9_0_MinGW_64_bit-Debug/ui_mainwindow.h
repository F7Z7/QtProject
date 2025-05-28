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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCustomPlot *graphPlotter;
    QPlainTextEdit *fromInput;
    QPlainTextEdit *toInput;
    QLabel *from;
    QLabel *to;
    QPushButton *startPlot;
    QPushButton *stopPlot;
    QPushButton *reset;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphPlotter = new QCustomPlot(centralwidget);
        graphPlotter->setObjectName("graphPlotter");
        graphPlotter->setGeometry(QRect(210, 100, 256, 192));
        fromInput = new QPlainTextEdit(centralwidget);
        fromInput->setObjectName("fromInput");
        fromInput->setGeometry(QRect(130, 350, 104, 85));
        toInput = new QPlainTextEdit(centralwidget);
        toInput->setObjectName("toInput");
        toInput->setGeometry(QRect(480, 350, 104, 85));
        from = new QLabel(centralwidget);
        from->setObjectName("from");
        from->setGeometry(QRect(40, 400, 63, 20));
        to = new QLabel(centralwidget);
        to->setObjectName("to");
        to->setGeometry(QRect(380, 400, 63, 20));
        startPlot = new QPushButton(centralwidget);
        startPlot->setObjectName("startPlot");
        startPlot->setGeometry(QRect(190, 480, 83, 29));
        stopPlot = new QPushButton(centralwidget);
        stopPlot->setObjectName("stopPlot");
        stopPlot->setGeometry(QRect(380, 480, 83, 29));
        reset = new QPushButton(centralwidget);
        reset->setObjectName("reset");
        reset->setGeometry(QRect(500, 480, 83, 29));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        from->setText(QCoreApplication::translate("MainWindow", "FROM", nullptr));
        to->setText(QCoreApplication::translate("MainWindow", "TO", nullptr));
        startPlot->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stopPlot->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

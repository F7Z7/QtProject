#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <qcustomplot.h>
#include <qvector.h>
#include <qtimer.h>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

int from,to;
bool ok1, ok2;

void MainWindow::on_startPlot_clicked()
{
    from=ui->fromInput->toPlainText().toInt(&ok1);
    to=ui->toInput->toPlainText().toInt(&ok2);
    // if(typeof(from)&&typeof(to)!=int)
    if (!ok1 || !ok2 || from >= to) {
        QMessageBox::warning(this, "Invalid Input", "Please enter valid numbers where FROM < TO.");
        return;
    }
    QVector<double> x,y;//for range
    for(int i=from;i<to;i++){
        x.push_back(i);
        y.push_back(QRandomGenerator::global()->bounded(100)); //randome generator
    }
    ui->graphPlotter->clearGraphs();
    ui->graphPlotter->addGraph();
    ui->graphPlotter->graph(0)->setData(x,y);
    ui->graphPlotter->xAxis->setLabel("x axis");
    ui->graphPlotter->yAxis->setLabel("random value");
    ui->graphPlotter->xAxis->setRange(from,to);
    ui->graphPlotter->yAxis->setRange(0,100);
    ui->graphPlotter->replot();


}


void MainWindow::on_stopPlot_clicked()
{
    timer->stop();

}


void MainWindow::on_reset_clicked()
{
    ui->fromInput->clear();
    ui->toInput->clear();
    ui->graphPlotter->clearGraphs();
    ui->graphPlotter->replot();
}


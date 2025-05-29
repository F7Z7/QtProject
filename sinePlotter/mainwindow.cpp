#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "qcustomplot.h"
#include <QTimer>
#include <QtMath>
#include <QPen>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,t(0.0)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updatePlot);
    ui->graphPlotter->addGraph();
    ui->graphPlotter->graph(0)->setPen(QPen(Qt::blue));
    ui->graphPlotter->graph(0)->setBrush(QBrush(QColor(0, 0, 255, 20)));
    ui->graphPlotter->xAxis->setLabel("Time");
    ui->graphPlotter->yAxis->setLabel("amplitude");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startPlot_clicked()
{
    timer->start(50);
}


void MainWindow::on_stopPlot_clicked()
{
    timer->stop();
}
void MainWindow::updatePlot(){
   const double dt =0.05;  //const for no change values
    t+=dt;
   x.append(t);
    sineData.append(qSin(2*M_PI*t));

   if (x.size() > 200) {
       x.remove(0);
       sineData.remove(0);
   }
   ui->graphPlotter->graph(0)->setData(x,sineData);
    ui->graphPlotter->xAxis->setRange(t-10, t);
   ui->graphPlotter->yAxis->setRange(-1.2,1.2);
   ui->graphPlotter->replot();
}

void MainWindow::on_resetPlot_clicked()
{
    timer->stop();
    ui->graphPlotter->clearGraphs();
    ui->graphPlotter->replot();
    ui->graphPlotter->addGraph();
    t=0;
    x.append(t);
    sineData.append(qSin(2*M_PI*t));
    ui->graphPlotter->graph(0)->setData(x,sineData);

}


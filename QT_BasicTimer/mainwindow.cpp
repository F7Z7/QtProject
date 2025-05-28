#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer= new QTimer(this);
    connect(timer,&QTimer::timeout,this,&MainWindow::updateCounter);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateCounter(){
    counter++;
    ui->counterLabel->setText(QString::number(counter));
}
void MainWindow::on_startBTn_clicked()
{
    timer->start(500);//changes in.5s
}


void MainWindow::on_stopBtn_clicked()
{
    timer->stop();
}


void MainWindow::on_resetBtn_clicked()
{ timer->stop();
    counter=0;
    ui->counterLabel->setText(QString::number(counter));

}


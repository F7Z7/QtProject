#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int num1,num2,result;
void MainWindow::on_add_clicked()
{
    num1=   ui->firstNum->text().toInt();
    num2= ui->secondNum->text().toInt();
    result=num1+num2;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_subtract_clicked()
{
    num1=   ui->firstNum->text().toInt();
    num2= ui->secondNum->text().toInt();
    result=num1-num2;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_multiply_clicked()
{
    num1= ui->firstNum->text().toInt();
    num2=ui->secondNum->text().toInt();
    result=num1*num2;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_divide_clicked()
{
    num1= ui->firstNum->text().toInt();
    num2=ui->secondNum->text().toInt();
    result=num1/num2;
    ui->result->setText(QString::number(result));
}


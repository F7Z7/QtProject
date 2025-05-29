#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startPlot_clicked();
    void on_stopPlot_clicked();
    void updatePlot();

    void on_resetPlot_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;              // Timer to update plot
    QVector<double> x, sineData; // Data vectors for x and sine values
    double t;                   // Time variable for x-axis
};

#endif // MAINWINDOW_H

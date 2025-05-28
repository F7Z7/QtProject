#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QTimer *timer;
    int counter=0;
private slots:
    void on_startBTn_clicked();

    void on_stopBtn_clicked();

    void on_resetBtn_clicked();
    void updateCounter();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "bikemenuwindow.h"
#include "carmenuwindow.h"
#include "truckmenuwindow.h"
#include "truck.h"
#include "car.h"
#include "bike.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_exit_clicked();

    void on_motobike_clicked();

    void on_truck_clicked();

    void on_car_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

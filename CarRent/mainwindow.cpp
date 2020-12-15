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


void MainWindow::on_exit_clicked()
{
    this->close();
    delete this;
}

void MainWindow::on_motobike_clicked()
{
    BikeMenuWindow *w = new BikeMenuWindow;
    w->show();
    this->close();
    delete this;
}

void MainWindow::on_truck_clicked()
{
    TruckMenuWindow *w = new TruckMenuWindow;
    w->show();
    this->close();
    delete this;
}

void MainWindow::on_car_clicked()
{
    CarMenuWindow *w = new CarMenuWindow;
    w->show();
    this->close();
    delete this;
}

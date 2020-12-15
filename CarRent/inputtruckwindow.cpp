#include "inputtruckwindow.h"
#include "ui_inputtruckwindow.h"
#include <iostream>
using namespace std;

InputTruckWindow::InputTruckWindow(List<truck> *list) :
    list(list),
    ui(new Ui::InputTruckWindow)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(0);
    ui->spinBox->setMaximum(1);
}

InputTruckWindow::~InputTruckWindow()
{
    delete ui;
}

void InputTruckWindow::on_pushButton_clicked()
{
    int price = ui->lineEdit->text().toInt();
    string trouble = ui->lineEdit_2->text().toStdString();
    int id = ui->lineEdit_3->text().toInt();
    bool problems = ui->spinBox->text().toInt();
    int motokasko = ui->lineEdit_4->text().toInt();
    truck Truck(motokasko, price, id, problems, trouble);
    list->pushTail(Truck);
    File<truck>::saveTruck(list, "truck.txt");
    QMessageBox::information(nullptr, "Добавление", "Успешное добавление");
}

void InputTruckWindow::on_pushButton_2_clicked()
{
    this->close();
    delete this;
}

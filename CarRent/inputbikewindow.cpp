#include "inputbikewindow.h"
#include "ui_inputbikewindow.h"
#include <iostream>
using namespace std;

InputBikeWindow::InputBikeWindow(List<bike> *list) :
    list(list),
    ui(new Ui::InputBikeWindow)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(0);
    ui->spinBox->setMaximum(1);
}

InputBikeWindow::~InputBikeWindow()
{
    delete ui;
}

void InputBikeWindow::on_pushButton_clicked()
{
    int price = ui->lineEdit->text().toInt();
    string trouble = ui->lineEdit_2->text().toStdString();
    int id = ui->lineEdit_3->text().toInt();
    bool problems = ui->spinBox->text().toInt();
    bool motokasko = ui->lineEdit_4->text().toInt();
    bike Bike(motokasko, price, id, problems, trouble);
    list->pushTail(Bike);
    File<bike>::saveBike(list, "bike.txt");
    QMessageBox::information(nullptr, "Добавление", "Успешное добавление");
}

void InputBikeWindow::on_pushButton_2_clicked()
{
    this->close();
    delete this;
}

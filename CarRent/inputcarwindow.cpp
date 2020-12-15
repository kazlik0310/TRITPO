#include "inputcarwindow.h"
#include "ui_inputcarwindow.h"
#include <iostream>
using namespace std;

InputCarWindow::InputCarWindow(List<car>* list) :
    list(list),
    ui(new Ui::InputCarWindow)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(0);
    ui->spinBox->setMaximum(1);
}

InputCarWindow::~InputCarWindow()
{
    delete ui;
}

void InputCarWindow::on_pushButton_clicked()
{
    int price = ui->lineEdit->text().toInt();
    string trouble = ui->lineEdit_2->text().toStdString();
    int id = ui->lineEdit_3->text().toInt();
    bool problems = ui->spinBox->text().toInt();
    int motokasko = ui->lineEdit_4->text().toInt();
    car Car(motokasko, price, id, problems, trouble);
    list->pushTail(Car);
    File<car>::saveCar(list, "car.txt");
    QMessageBox::information(nullptr, "Добавление", "Успешное добавление");

}

void InputCarWindow::on_pushButton_2_clicked()
{
    this->close();
    delete this;
}

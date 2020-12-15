#include "editcarwindow.h"
#include "ui_editcarwindow.h"
#include <iostream>
using namespace std;

EditCarWindow::EditCarWindow(List<car>* list) :
    list(list),
    ui(new Ui::EditCarWindow)
{
    ui->setupUi(this);
    ui->spinBox_2->setMinimum(1);
    ui->spinBox_2->setMaximum(list->size());

    ui->spinBox->setMinimum(0);
    ui->spinBox->setMaximum(1);
}

EditCarWindow::~EditCarWindow()
{
    delete ui;
}

void EditCarWindow::on_pushButton_clicked()
{
    int number = ui->spinBox_2->text().toInt() - 1;
    list->operator[](number).setPrice(ui->lineEdit->text().toInt());
    list->operator[](number).setProblems(ui->lineEdit_2->text().toStdString());
    list->operator[](number).setId(ui->lineEdit_3->text().toInt());
    list->operator[](number).setStatus(ui->spinBox->text().toInt());
    list->operator[](number).setSeats(ui->lineEdit_4->text().toInt());
    File<car>::saveCar(list, "car.txt");
    QMessageBox::information(nullptr, "Изменение", "Успешное изменение");

}

void EditCarWindow::on_pushButton_2_clicked()
{
    this->close();
    delete this;
}

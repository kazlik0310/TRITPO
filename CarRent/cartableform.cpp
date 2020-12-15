#include "cartableform.h"
#include "ui_cartableform.h"

CarTableForm::CarTableForm(List<car>* list) :
    list(list),
    ui(new Ui::CarTableForm)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(5);
    for (int i = 0; i < list->size(); i++) {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(list->operator[](i).getId())));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(list->operator[](i).getPrice())));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(list->operator[](i).getProblems())));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list->operator[](i).getSeats())));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(list->operator[](i).getStatus())));

    }
}

CarTableForm::~CarTableForm()
{
    delete ui;
}

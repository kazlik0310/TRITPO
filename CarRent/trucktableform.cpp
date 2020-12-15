#include "trucktableform.h"
#include "ui_trucktableform.h"

TruckTableForm::TruckTableForm(List<truck>*list) :
    list(list),
    ui(new Ui::TruckTableForm)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(5);
    for (int i = 0; i < list->size(); i++) {
        ui->tableWidget->insertRow(i);

        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(list->operator[](i).getId())));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(list->operator[](i).getPrice())));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(list->operator[](i).getProblems())));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list->operator[](i).getCarrying())));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(list->operator[](i).getStatus())));
    }
}

TruckTableForm::~TruckTableForm()
{
    delete ui;
}

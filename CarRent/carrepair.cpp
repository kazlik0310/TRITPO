#include "carrepair.h"
#include "ui_carrepair.h"

CarRepair::CarRepair(List<car>*list) :
    list(list),
    ui(new Ui::CarRepair)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(1);
    ui->spinBox->setMaximum(list->size());
}

CarRepair::~CarRepair()
{
    delete ui;
}

void CarRepair::on_pushButton_clicked()
{
    int number = ui->spinBox->text().toInt() - 1;
    list->operator[](number).setProblems("");
    QMessageBox::information(nullptr, "Ремонт", "Автомобиль починен успешно!");
    File<car>::saveCar(list, "car.txt");

}

void CarRepair::on_pushButton_2_clicked()
{
    this->close();
    delete this;
}

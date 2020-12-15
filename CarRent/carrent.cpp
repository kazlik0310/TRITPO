#include "carrent.h"
#include "ui_carrent.h"

CarRent::CarRent(List<car>*list) :
    list(list),
    ui(new Ui::CarRent)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(1);
    ui->spinBox->setMaximum(list->size());
}

CarRent::~CarRent()
{
    delete ui;
}

void CarRent::on_pushButton_clicked()
{
    int number = ui->spinBox->text().toInt() - 1;
    list->operator[](number).setStatus(1);
    QMessageBox::information(nullptr, "Аренда", "Автомобиль арендован успешно!");
    File<car>::saveCar(list, "car.txt");
}

void CarRent::on_pushButton_2_clicked()
{
    this->close();
    delete this;
}

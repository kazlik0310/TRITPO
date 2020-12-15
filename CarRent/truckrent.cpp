#include "truckrent.h"
#include "ui_truckrent.h"

TruckRent::TruckRent(List<truck>* list) :
    list(list),
    ui(new Ui::TruckRent)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(1);
    ui->spinBox->setMaximum(list->size());
}

TruckRent::~TruckRent()
{
    delete ui;
}

void TruckRent::on_pushButton_clicked()
{
    int number = ui->spinBox->text().toInt() - 1;
    list->operator[](number).setStatus(1);
    File<truck>::saveTruck(list, "truck.txt");
    QMessageBox::information(nullptr, "Аренда", "Автомобиль арендован успешно!");
}

void TruckRent::on_pushButton_2_clicked()
{
    this->close();
    delete this;
}

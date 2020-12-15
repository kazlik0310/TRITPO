#include "bikerent.h"
#include "ui_bikerent.h"

BikeRent::BikeRent(List<bike>* list) :
    list(list),
    ui(new Ui::BikeRent)
{
    ui->setupUi(this);
}

BikeRent::~BikeRent()
{
    delete ui;
}

void BikeRent::on_pushButton_clicked()
{
    int number = ui->spinBox->text().toInt() - 1;
    list->operator[](number).setStatus(1);
    QMessageBox::information(nullptr, "Аренда", "Автомобиль арендован успешно!");
    File<bike>::saveBike(list, "bike.txt");
}

void BikeRent::on_pushButton_2_clicked()
{
    this->close();
    delete this;
}

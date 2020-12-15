#include "bikerepair.h"
#include "ui_bikerepair.h"

BikeRepair::BikeRepair(List<bike>* list) :
    list(list),
    ui(new Ui::BikeRepair)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(1);
    ui->spinBox->setMaximum(list->size());
}

BikeRepair::~BikeRepair()
{
    delete ui;
}

void BikeRepair::on_pushButton_clicked()
{
    int number = ui->spinBox->text().toInt() - 1;
    list->operator[](number).setProblems("");
    QMessageBox::information(nullptr, "Ремонт", "Автомобиль починен успешно!");
    File<bike>::saveBike(list, "bike.txt");
}

void BikeRepair::on_pushButton_2_clicked()
{
    this->close();
    delete this;
}

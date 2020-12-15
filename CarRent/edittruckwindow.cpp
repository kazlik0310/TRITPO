#include "edittruckwindow.h"
#include "ui_edittruckwindow.h"

EditTruckWindow::EditTruckWindow(List<truck>* list) :
    list(list),
    ui(new Ui::EditTruckWindow)
{
    ui->setupUi(this);
    ui->spinBox_2->setMinimum(1);
    ui->spinBox_2->setMaximum(list->size());

    ui->spinBox->setMinimum(0);
    ui->spinBox->setMaximum(1);
}

EditTruckWindow::~EditTruckWindow()
{
    delete ui;
}

void EditTruckWindow::on_pushButton_clicked()
{
    int number = ui->spinBox_2->text().toInt() - 1;
    list->operator[](number).setPrice(ui->lineEdit->text().toInt());
    list->operator[](number).setProblems(ui->lineEdit_2->text().toStdString());
    list->operator[](number).setId(ui->lineEdit_3->text().toInt());
    list->operator[](number).setStatus(ui->spinBox->text().toInt());
    list->operator[](number).setCarrying(ui->lineEdit_4->text().toInt());
    File<truck>::saveTruck(list, "truck.txt");
    QMessageBox::information(nullptr, "Изменение", "Успешное изменение");

}

void EditTruckWindow::on_pushButton_2_clicked()
{
    this->close();
    delete this;
}

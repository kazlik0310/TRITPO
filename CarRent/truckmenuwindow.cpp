#include "truckmenuwindow.h"
#include "ui_truckmenuwindow.h"

TruckMenuWindow::TruckMenuWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TruckMenuWindow)
{
    ui->setupUi(this);
}

TruckMenuWindow::~TruckMenuWindow()
{
    delete ui;
}

void TruckMenuWindow::on_exit_clicked()
{
    MainWindow *w = new MainWindow;
    w->show();
    this->close();
    delete this;
}

void TruckMenuWindow::on_show_clicked()
{
    List<truck> * list = new List<truck>();
    File<truck>::openTruck(list, "truck.txt");
    TruckTableForm *w = new TruckTableForm(list);
    w->show();
}


void TruckMenuWindow::on_update_clicked()
{
    List<truck> * list = new List<truck>();
    File<truck>::openTruck(list, "truck.txt");
    if(list->size() < 1) {
        QMessageBox::critical(nullptr, "Изменение", "Список пуст!");
        return;
    } else {
        EditTruckWindow *w = new EditTruckWindow(list);
        w->show();
        File<truck>::saveTruck(list, "truck.txt");
    }
}

void TruckMenuWindow::on_delete_2_clicked()
{
    List<truck> * list = new List<truck>();
    File<truck>::openTruck(list, "truck.txt");
    if(list->size() < 1) {
        QMessageBox::critical(nullptr, "Удаление", "Список пуст!");
        return;
    } else {
        list->popTail();
        QMessageBox::information(nullptr, "Удаление", "Элемент успешно удалён!");
        File<truck>::saveTruck(list, "truck.txt");
    }
}

void TruckMenuWindow::on_arend_clicked()
{
    List<truck> * list = new List<truck>();
    File<truck>::openTruck(list, "truck.txt");
    TruckRent *w = new TruckRent(list);
    w->show();
    File<truck>::saveTruck(list, "truck.txt");
}

void TruckMenuWindow::on_pushButton_clicked()
{
    List<truck> * list = new List<truck>();
    File<truck>::openTruck(list, "truck.txt");
    InputTruckWindow *w = new InputTruckWindow(list);
    w->show();
}

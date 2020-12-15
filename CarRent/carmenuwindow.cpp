#include "carmenuwindow.h"
#include "ui_carmenuwindow.h"

CarMenuWindow::CarMenuWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CarMenuWindow)
{
    ui->setupUi(this);
}

CarMenuWindow::~CarMenuWindow()
{
    delete ui;
}

void CarMenuWindow::on_exit_clicked()
{
    MainWindow *w = new MainWindow;
    w->show();
    this->close();
    delete this;
}

void CarMenuWindow::on_show_clicked()
{
    List<car> * list = new List<car>();
    File<car>::openCar(list, "car.txt");
    CarTableForm *w = new CarTableForm(list);
    w->show();
}


void CarMenuWindow::on_update_clicked()
{
    List<car> * list = new List<car>();
    File<car>::openCar(list, "car.txt");
    if(list->size() < 1) {
        QMessageBox::critical(nullptr, "Изменение", "Список пуст!");
        return;
    } else {
        EditCarWindow *w = new EditCarWindow(list);
        w->show();
        File<car>::saveCar(list, "car.txt");
    }
}

void CarMenuWindow::on_delete_2_clicked()
{
    List<car> * list = new List<car>();
    File<car>::openCar(list, "car.txt");
    if(list->size() < 1) {
        QMessageBox::critical(nullptr, "Удаление", "Список пуст!");
        return;
    } else {
        list->popTail();
        QMessageBox::information(nullptr, "Удаление", "Элемент успешно удалён!");
        File<car>::saveCar(list, "car.txt");
    }
}

void CarMenuWindow::on_arend_clicked()
{
    List<car> * list = new List<car>();
    File<car>::openCar(list, "car.txt");
    CarRent *w = new CarRent(list);
    w->show();
    File<car>::saveCar(list, "car.txt");
}

void CarMenuWindow::on_pushButton_clicked()
{
    List<car> * list = new List<car>();
    File<car>::openCar(list, "car.txt");
    InputCarWindow *w = new InputCarWindow(list);
    w->show();
}


void CarMenuWindow::on_remont_clicked()
{
    List<car> * list = new List<car>();
    File<car>::openCar(list, "car.txt");
    CarRent *w = new CarRent(list);
    w->show();
}

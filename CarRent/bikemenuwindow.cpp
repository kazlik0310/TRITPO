#include "bikemenuwindow.h"
#include "ui_bikemenuwindow.h"

BikeMenuWindow::BikeMenuWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BikeMenuWindow)
{
    ui->setupUi(this);
}

BikeMenuWindow::~BikeMenuWindow()
{
    delete ui;
}

void BikeMenuWindow::on_exit_clicked()
{
    MainWindow *w = new MainWindow;
    w->show();
    this->close();
    delete this;
}

void BikeMenuWindow::on_show_clicked()
{
    List<bike> * list = new List<bike>();
    File<bike>::openBike(list, "bike.txt");
    BikeTableForm *w = new BikeTableForm(list);
    w->show();
}


void BikeMenuWindow::on_update_clicked()
{
    List<bike> * list = new List<bike>();
    File<bike>::openBike(list, "bike.txt");
    if(list->size() < 1) {
        QMessageBox::critical(nullptr, "Изменение", "Список пуст!");
        return;
    } else {
        EditBikeWindow *w = new EditBikeWindow(list);
        w->show();
        File<bike>::saveBike(list, "bike.txt");
    }
}

void BikeMenuWindow::on_delete_2_clicked()
{
    List<bike> * list = new List<bike>();
    File<bike>::openBike(list, "bike.txt");
    if(list->size() < 1) {
        QMessageBox::critical(nullptr, "Удаление", "Список пуст!");
        return;
    } else {
        list->popTail();
        QMessageBox::information(nullptr, "Удаление", "Элемент успешно удалён!");
        File<bike>::saveBike(list, "bike.txt");
    }
}

void BikeMenuWindow::on_arend_clicked()
{
    List<bike> * list = new List<bike>();
    File<bike>::openBike(list, "bike.txt");
    BikeRent *w = new BikeRent(list);
    w->show();
    File<bike>::saveBike(list, "bike.txt");
}

void BikeMenuWindow::on_pushButton_clicked()
{
    List<bike> * list = new List<bike>();
    File<bike>::openBike(list, "bike.txt");
    InputBikeWindow *w = new InputBikeWindow(list);
    w->show();
}


void BikeMenuWindow::on_remont_clicked()
{
    List<bike> * list = new List<bike>();
    File<bike>::openBike(list, "bike.txt");
    BikeRent *w = new BikeRent(list);
    w->show();
}

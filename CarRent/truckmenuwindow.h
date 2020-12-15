#ifndef TRUCKMENUWINDOW_H
#define TRUCKMENUWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "file.h"
#include "truck.h"
#include "truckrent.h"
#include "trucktableform.h"
#include "mainwindow.h"
#include "edittruckwindow.h"
#include "inputtruckwindow.h"
#include "List.h"

namespace Ui {
class TruckMenuWindow;
}

class TruckMenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TruckMenuWindow(QWidget *parent = nullptr);
    ~TruckMenuWindow();

private slots:
    void on_exit_clicked();

    void on_show_clicked();

    void on_update_clicked();

    void on_delete_2_clicked();

    void on_arend_clicked();

    void on_pushButton_clicked();

private:
    Ui::TruckMenuWindow *ui;
};

#endif // TRUCKMENUWINDOW_H

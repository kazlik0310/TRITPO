#ifndef BIKEMENUWINDOW_H
#define BIKEMENUWINDOW_H

#include <QMainWindow>
#include "mainwindow.h"
#include "bike.h"
#include "bikerent.h"
#include "bikerepair.h"
#include "editbikewindow.h"
#include "inputbikewindow.h"
#include "biketableform.h"

namespace Ui {
class BikeMenuWindow;
}

class BikeMenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BikeMenuWindow(QWidget *parent = nullptr);
    ~BikeMenuWindow();

private slots:
    void on_exit_clicked();

    void on_arend_clicked();

    void on_pushButton_clicked();

    void on_show_clicked();

    void on_remont_clicked();

    void on_update_clicked();

    void on_delete_2_clicked();

private:
    Ui::BikeMenuWindow *ui;
};

#endif // BIKEMENUWINDOW_H

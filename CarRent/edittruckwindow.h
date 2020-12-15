#ifndef EDITTRUCKWINDOW_H
#define EDITTRUCKWINDOW_H

#include <QWidget>
#include <QIntValidator>
#include <QMainWindow>
#include "truckmenuwindow.h"


namespace Ui {
class EditTruckWindow;
}

class EditTruckWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditTruckWindow(List<truck> *list);
    ~EditTruckWindow();

private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::EditTruckWindow *ui;
    QIntValidator *validator;
    QIntValidator *validatorplace;
    List<truck> *list;
};

#endif // EDITTRUCKWINDOW_H

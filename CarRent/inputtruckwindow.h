#ifndef INPUTTRUCKWINDOW_H
#define INPUTTRUCKWINDOW_H

#include <QIntValidator>
#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class InputTruckWindow;
}

class InputTruckWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InputTruckWindow(List<truck> *list = nullptr);
    ~InputTruckWindow();

private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::InputTruckWindow *ui;
    QIntValidator *validator;
    QIntValidator *validatorcarrying;
    List<truck> *list;
};

#endif // INPUTTRUCKWINDOW_H

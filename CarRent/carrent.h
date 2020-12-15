#ifndef CARRENT_H
#define CARRENT_H

#include <QWidget>
#include "mainwindow.h"
#include "List.h"
#include "car.h"

namespace Ui {
class CarRent;
}

class CarRent : public QWidget
{
    Q_OBJECT

public:
    explicit CarRent(List<car> *list = nullptr);
    ~CarRent();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CarRent *ui;
    List<car> *list;
};

#endif // CARRENT_H

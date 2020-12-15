#ifndef CARREPAIR_H
#define CARREPAIR_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class CarRepair;
}

class CarRepair : public QWidget
{
    Q_OBJECT

public:
    explicit CarRepair(List<car> *list);
    ~CarRepair();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CarRepair *ui;
    List<car> *list;
};

#endif // CARREPAIR_H

#ifndef TRUCKRENT_H
#define TRUCKRENT_H

#include <QWidget>
#include "truckmenuwindow.h"

namespace Ui {
class TruckRent;
}

class TruckRent : public QWidget
{
    Q_OBJECT

public:
    explicit TruckRent(List<truck> *list);
    ~TruckRent();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TruckRent *ui;
    List<truck> *list;
};

#endif // TRUCKRENT_H

#ifndef BIKERENT_H
#define BIKERENT_H

#include <QWidget>
#include "mainwindow.h"
#include "List.h"
#include "bike.h"

namespace Ui {
class BikeRent;
}

class BikeRent : public QWidget
{
    Q_OBJECT

public:
    explicit BikeRent(List<bike> *list = nullptr);
    ~BikeRent();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::BikeRent *ui;
    List<bike> *list;
};

#endif // BIKERENT_H

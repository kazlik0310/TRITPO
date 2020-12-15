#ifndef BIKEREPAIR_H
#define BIKEREPAIR_H

#include <QWidget>
#include "bikemenuwindow.h"
#include "List.h"
#include "bike.h"

namespace Ui {
class BikeRepair;
}

class BikeRepair : public QWidget
{
    Q_OBJECT

public:
    explicit BikeRepair(List<bike> *list);
    ~BikeRepair();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::BikeRepair *ui;
    List<bike> *list;
};

#endif // BIKEREPAIR_H

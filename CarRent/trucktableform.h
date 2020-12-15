#ifndef TRUCKTABLEFORM_H
#define TRUCKTABLEFORM_H

#include <QWidget>
#include "truckmenuwindow.h"

namespace Ui {
class TruckTableForm;
}

class TruckTableForm : public QWidget
{
    Q_OBJECT

public:
    explicit TruckTableForm(List<truck>* list = nullptr);
    ~TruckTableForm();

private slots:

private:
    Ui::TruckTableForm *ui;
    List<truck>* list;
};

#endif // TRUCKTABLEFORM_H

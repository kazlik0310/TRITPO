#ifndef CARTABLEFORM_H
#define CARTABLEFORM_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class CarTableForm;
}

class CarTableForm : public QWidget
{
    Q_OBJECT

public:
    explicit CarTableForm(List<car>* list = nullptr);
    ~CarTableForm();

private slots:
private:
    Ui::CarTableForm *ui;
    List<car>* list;
};

#endif // CARTABLEFORM_H


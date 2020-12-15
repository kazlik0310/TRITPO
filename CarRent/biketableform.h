#ifndef BIKETABLEFORM_H
#define BIKETABLEFORM_H

#include <QWidget>
#include "bikemenuwindow.h"

namespace Ui {
class BikeTableForm;
}

class BikeTableForm : public QWidget
{
    Q_OBJECT

public:
    explicit BikeTableForm(List<bike>* list = nullptr);
    ~BikeTableForm();

private slots:

private:
    Ui::BikeTableForm *ui;
    List<bike>* list;
};

#endif // BIKETABLEFORM_H

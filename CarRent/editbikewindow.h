#ifndef EDITBIKEWINDOW_H
#define EDITBIKEWINDOW_H

#include <QWidget>
#include <QIntValidator>
#include <QMainWindow>
#include "bikemenuwindow.h"
#include "List.h"
#include "bike.h"

namespace Ui {
class EditBikeWindow;
}

class EditBikeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditBikeWindow(List<bike> *list);
    ~EditBikeWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::EditBikeWindow *ui;
    QIntValidator *validator;
    QIntValidator *validatorplace;
    List<bike> *list;
};

#endif // EDITBIKEWINDOW_H

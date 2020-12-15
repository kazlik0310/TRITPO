#ifndef INPUTBIKEWINDOW_H
#define INPUTBIKEWINDOW_H

#include <QIntValidator>
#include <QMainWindow>
#include "bikemenuwindow.h"

namespace Ui {
class InputBikeWindow;
}

class InputBikeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InputBikeWindow(List<bike> *list);
    ~InputBikeWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::InputBikeWindow *ui;
    QIntValidator *validator;
    QIntValidator *validatorplace;
    List<bike> *list;
};

#endif // INPUTBIKEWINDOW_H

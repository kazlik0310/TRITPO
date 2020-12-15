#ifndef INPUTCARWINDOW_H
#define INPUTCARWINDOW_H

#include <QIntValidator>
#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class InputCarWindow;
}

class InputCarWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InputCarWindow(List<car> *list);
    ~InputCarWindow();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::InputCarWindow *ui;
    QIntValidator *validator;
    QIntValidator *validatorplace;
    List<car> *list;
};

#endif // INPUTCARWINDOW_H

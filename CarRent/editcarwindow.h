#ifndef EDITCARWINDOW_H
#define EDITCARWINDOW_H

#include <QWidget>
#include <QIntValidator>
#include <QMainWindow>
#include "mainwindow.h"


namespace Ui {
class EditCarWindow;
}

class EditCarWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditCarWindow(List<car> *list = nullptr);
    ~EditCarWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::EditCarWindow *ui;
    QIntValidator *validator;
    QIntValidator *validatorplace;
    List<car> *list;
};

#endif // EDITCARWINDOW_H

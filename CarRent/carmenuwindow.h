#ifndef CARMENUWINDOW_H
#define CARMENUWINDOW_H

#include <QMainWindow>
#include "mainwindow.h"
#include "car.h"
#include "carrent.h"
#include "carrepair.h"
#include "cartableform.h"
#include "List.h"
#include "file.h"
#include "editcarwindow.h"
#include "inputcarwindow.h"

namespace Ui {
class CarMenuWindow;
}

class CarMenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CarMenuWindow(QWidget *parent = nullptr);
    ~CarMenuWindow();

private slots:
    void on_exit_clicked();

    void on_show_clicked();

    void on_remont_clicked();

    void on_arend_clicked();

    void on_pushButton_clicked();

    void on_update_clicked();

    void on_delete_2_clicked();

private:
    Ui::CarMenuWindow *ui;
};

#endif // CARMENUWINDOW_H

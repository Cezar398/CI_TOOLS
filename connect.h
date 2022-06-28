#ifndef CONNECT_H
#define CONNECT_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class connect;
}

class connect : public QDialog
{
    Q_OBJECT

public:
    explicit connect(QWidget *parent = nullptr);
    ~connect();

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_toolButton_2_clicked();

    void on_toolButton_login_clicked();

    void on_pushButton_login_clicked();

    void on_toolButton_clicked();

private:
    Ui::connect *ui;
    MainWindow *mainWindow;
};

#endif // CONNECT_H

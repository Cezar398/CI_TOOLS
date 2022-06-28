#include "connect.h"
#include "mainwindow.h"
#include "ui_connect.h"
#include <QMessageBox>

connect::connect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::connect)
{
    ui->setupUi(this);
}

connect::~connect()
{
    delete ui;

}

void connect::on_checkBox_stateChanged(int arg1)
{

    if(ui->checkBox->isChecked())
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
    else
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}


/*
 *
 *     QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if(username == "admin")
           QMessageBox::information(this, "Login", "OK");*/

void connect::on_toolButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

        if(username == "admin" && password == "admin")
        {
            mainWindow = new MainWindow(this);
            hide();
            mainWindow->show();
        }else
        {
            QMessageBox::warning(this, "Login", "Username or password is incorrect");
        }
}


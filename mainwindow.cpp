#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "windows.h"
#include "Lmcons.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


   /* QString name = qgetenv("USER");
        if (name.isEmpty())
            name = qgetenv("USERNAME");

    ui->PC_NAME->setText(name);*/
}

MainWindow::~MainWindow()
{
    delete ui;


}


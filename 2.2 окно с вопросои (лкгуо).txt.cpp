
//ТУТ ДЕЛАЕМ РЕАЛИЗАЦИЮ Ф-Я

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "QString"
#include <QMessageBox>
using namespace std;

//
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}
//








void MainWindow::on_pushButton_clicked()
{

 QMessageBox::StandardButton msg= QMessageBox::question(this,"Window","Ты пидорас ? ",QMessageBox::Yes|QMessageBox::No );


if(msg==QMessageBox::Yes)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;




}




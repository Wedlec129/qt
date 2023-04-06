
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

    QMessageBox msgBox;

    // Тип иконки сообщения
    msgBox.setIcon(QMessageBox::Information);


    msgBox.setWindowTitle("window");

    //  сообщения
    msgBox.setText("ты пидор");


    msgBox.setSizeIncrement(900,900);

    // Добавление реагирования на софт клавиши
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);

    // На какой кнопке фокусироваться по умолчанию
    msgBox.setDefaultButton(QMessageBox::Ok);

    /* Запускаем QMessageBox. После выполнения, в ret будет лежать значение кнопки, на которую нажали - это необходимо для дальнейшей обработки событий*/
    int ret = msgBox.exec();


    // Собственно вот этот case и отвечает за обработку событий
    switch (ret) {
    case QMessageBox::Cancel:
         cout<<"cancel"<<endl;
         break;
         
         
         
      case QMessageBox::Ok:
         cout<<"OK"<<endl;
         // Сюда пишем обработку события Ok
         break;

    }






}




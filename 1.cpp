#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);// Каждое Qt5-приложение (за исключением консольных) должно включать следующую строчку
    MainWindow  window;// MainWindow(типо дизай )  QWidget  // Главный виджет, который представляет окно нашей программы


    window.resize(900, 600); // изменяем размер виджета
    window.setWindowTitle("WedlecApp"); // устанавливаем заголовок для главного окна
    window.show(); // выводим виджет на экране




    return app.exec();// С помощью метода exec() запускаем основной цикл нашей программы

}

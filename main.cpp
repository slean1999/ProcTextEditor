#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QFile>
#include <QTextStream>
#include "mainwindow.h"
#include "ccolormapwidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //MainWindow window;
    QFile file("c://new.txt");


       QTextStream in(&file);
       QString line = in.readAll();

    CColorMapWidget* widget = new CColorMapWidget();
    widget->SetValueString(line);
    widget->show();
    //window.show();

    return a.exec();
}

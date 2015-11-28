#include "qtproctext.h"
#include <QtWidgets/QApplication>
#include <QFile>
#include <QTextStream>
#include <qtxml/QDomDocument>
#include "ccolormapwidget.h"

#pragma comment(lib,"Qt5Xmld.lib")
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file("c:/material.xml");
    file.open(QFile::ReadOnly | QFile::Text);
    
    



    return a.exec();
}

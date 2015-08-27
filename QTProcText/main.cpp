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
    
    QDomDocument document;
    QString error;  
    int row = 0, column = 0;  
    QString ttt("<colortype type=\"pattern\"/>");
    document.setContent(ttt, false, &error, &row, &column);
    
    QDomElement root = document.documentElement();     

    QString root_tag_name = root.tagName();



    return a.exec();
}

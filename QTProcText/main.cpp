#include "qtproctext.h"
#include <QtWidgets/QApplication>
#include <QFile>
#include <QTextStream>
#include "ccolormapwidget.h"
#include "cctrlframe.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CCtrlFrame ctrlFrame("stone.xml", NULL);
    //ctrlFrame.create("c:/material.xml");
    ctrlFrame.show();

    return a.exec();
}

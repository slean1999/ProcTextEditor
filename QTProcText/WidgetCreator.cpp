#include "WidgetCreator.h"
#include <qtxml/QDomDocument>
#include <QFile>

#pragma comment(lib,"Qt5Xmld.lib")

CWidgetCreator::CWidgetCreator(void)
{
}

CWidgetCreator::CWidgetCreator( const QString& filename )
{
    QFile file(filename);
    file.open(QFile::ReadOnly | QFile::Text);

    QDomDocument document;
    QString error;  
    int row = 0, column = 0;  
    document.setContent(&file, false, &error, &row, &column);

    QDomElement root = document.documentElement();  

    QString root_tag_name = root.tagName();
    QDomElement layer = root.firstChildElement();  
    QDomElement color = layer.firstChildElement();  
    QString colorname = color.tagName();
    QDomElement colortype = color.firstChildElement();  
    QString scolortype = colortype.tagName();
    QString sss = colortype.attributeNode("type").value();
}


CWidgetCreator::~CWidgetCreator(void)
{
}

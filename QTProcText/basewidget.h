#ifndef BASEWIDGET_H
#define BASEWIDGET_H

#include <QWidget>
#include <QDoubleSpinBox>
#include "inc.h"
#include "IInterfaceDef.h"
using namespace rapidxml; 

class BaseWidget : public QWidget//, public IXMLFileParse
{
    Q_OBJECT
public:
    explicit BaseWidget(QWidget *parent = 0);    
    virtual void SetValueString(xml_document<>& doc,xml_node<>* root) = 0;
    virtual QString GetValueString() = 0;
    virtual void CreateSpinBox() = 0;

signals:

public slots:

};

#endif // BASEWIDGET_H

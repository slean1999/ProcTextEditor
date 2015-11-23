#ifndef CLAYERFRAME_H
#define CLAYERFRAME_H

#include <QObject>
#include "basewidget.h"
#include <QVBoxLayout>

class CLayerFrame : public BaseWidget
{
    Q_OBJECT

public:
    CLayerFrame(QWidget *parent);
    ~CLayerFrame();
    void            SetValueString(xml_document<>& doc,xml_node<>* root);
    QString         GetValueString();
    void            CreateSpinBox();
private:
    QVBoxLayout     m_VLayout;
//    QDomElement     m_Elecolortype;
    
};

#endif // CLAYERFRAME_H

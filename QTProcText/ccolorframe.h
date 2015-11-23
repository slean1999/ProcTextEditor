#ifndef CCOLORFRAME_H
#define CCOLORFRAME_H

#include <QObject>
#include "basewidget.h"
#include <QVBoxLayout>
class CColorFrame : public BaseWidget
{
    Q_OBJECT

public:
    CColorFrame(QWidget *parent);
    ~CColorFrame();
    void            SetValueString(xml_document<>& doc,xml_node<>* root);
    QString         GetValueString();
    void            CreateSpinBox();
private:
    int             m_nColorType;// pattern or color
    /*QDomElement     m_Elecolortype;*/
    QVBoxLayout     m_VLayout;

};

#endif // CCOLORFRAME_H

#ifndef CCOLORFRAME_H
#define CCOLORFRAME_H

#include <QObject>
#include "basewidget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
// 由patternframe或单色控件组成
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
    QHBoxLayout     m_HLayout;

};

#endif // CCOLORFRAME_H

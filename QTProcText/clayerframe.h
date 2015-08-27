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
    void            SetValueString(const QDomElement& colorDomEle);
    QString         GetValueString();
    void            CreateSpinBox();
private:
    QVBoxLayout     m_VLayout;
    QDomElement     m_Elecolortype;
    
};

#endif // CLAYERFRAME_H

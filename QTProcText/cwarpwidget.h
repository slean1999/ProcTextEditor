#ifndef CWARPWIDGET_H
#define CWARPWIDGET_H

#include <QWidget>
#include <QDoubleSpinBox>
#include "basewidget.h"
#include "BaseDef.h"

typedef struct tag_Warp
{
    int                 nWarpType;
    void*               pData;
    QDoubleSpinBox*     pSpinBox;
}_Warp;

class CWarpWidget : public BaseWidget
{
    Q_OBJECT
public:
    explicit CWarpWidget(QWidget *parent = 0);    
    virtual void SetValueString(const QDomElement& colorDomEle);
    virtual QString GetValueString();
    virtual void CreateSpinBox();
signals:

public slots:

private:
    std::list<_Warp>    m_lsWarpData;    
};

#endif // CWARPWIDGET_H

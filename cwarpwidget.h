#ifndef CWARPWIDGET_H
#define CWARPWIDGET_H

#include <QWidget>
#include <QDoubleSpinBox>
#include "basewidget.h"
#include "BaseDef.h"
class CWarpWidget : public BaseWidget
{
    Q_OBJECT
public:
    explicit CWarpWidget(QWidget *parent = 0);
    virtual void SetValue(void*);
    virtual void SetValueString(const QString& strValue);
    virtual QString GetValueString();
    virtual void CreateSpinBox();
signals:

public slots:

private:
    _Turb               m_turb;
    double              m_MatValue[16];
    QDoubleSpinBox*     m_vMatSpin[16];
    QDoubleSpinBox*     m_vTurbSpin[6];
};

#endif // CWARPWIDGET_H

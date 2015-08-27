#ifndef CPROPERTYWIDGET_H
#define CPROPERTYWIDGET_H
#include "basewidget.h"
#include "BaseDef.h"
#include <QDoubleSpinBox>

class CPropertyWidget : public BaseWidget
{
public:
    CPropertyWidget(QWidget* parent = 0);
    virtual void    SetValueString(const QDomElement& colorDomEle);
    virtual QString GetValueString();
    virtual void    CreateSpinBox();

protected:
    QString GetStringValue(const QString &strValue);
    bool    ParseVectorValue(const QString& strValue, float value[3]);
private:
    void                StringToData();
    void                DataToString();

private:
    _Property           m_property;
    QDoubleSpinBox      m_pDiffuseSpin;
    QDoubleSpinBox      m_pBrillanceSpin;
    QDoubleSpinBox      m_pSpecSpin;
    QDoubleSpinBox      m_pRoughSpin;
    QDoubleSpinBox      m_pvAmibentSpin[3];
    QDoubleSpinBox      m_pvRelfmaxSpin[3];
    QDoubleSpinBox      m_pvRelfminSpin[3];
    QDoubleSpinBox      m_pFalloffSpin;

};

#endif // CPROPERTYWIDGET_H

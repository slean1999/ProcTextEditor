#include "cpropertywidget.h"

CPropertyWidget::CPropertyWidget(QWidget* parent)
    : BaseWidget(parent)
{
    memset(&m_property,0,sizeof(m_property));
}

void CPropertyWidget::SetValueString(const QString &strValue)
{

}

QString CPropertyWidget::GetValueString()
{
    return QString("");
}

void CPropertyWidget::CreateSpinBox()
{
    m_pDiffuseSpin = new QDoubleSpinBox(this);
    m_pBrillanceSpin;
    m_pSpecSpin;
    m_pRoughSpin;
    m_pvAmibentSpin[3];
    m_pvRelfmaxSpin[3];
    m_pvRelfminSpin[3];
    m_pFalloffSpin;
}

void CPropertyWidget::StringToData()
{

}

void CPropertyWidget::DataToString()
{

}

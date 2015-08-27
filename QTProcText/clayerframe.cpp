#include "clayerframe.h"
#include "ccolorframe.h"
#include "cpropertywidget.h"

CLayerFrame::CLayerFrame(QWidget *parent)
    : BaseWidget(parent)
{

}

CLayerFrame::~CLayerFrame()
{

}

void CLayerFrame::SetValueString( const QDomElement& colorDomEle )
{
    m_Elecolortype = colorDomEle;
    CreateSpinBox();
}

QString CLayerFrame::GetValueString()
{
    return QString("");
}

void CLayerFrame::CreateSpinBox()
{
    CColorFrame*        pColorFrame     = new CColorFrame(this);
    CPropertyWidget*    pPropertyWidget = new CPropertyWidget(this);
    
    QDomElement colorelem = m_Elecolortype.firstChildElement();
    pColorFrame->SetValueString(colorelem);
    QDomElement propertyelem = colorelem.nextSiblingElement();
    pPropertyWidget->SetValueString(propertyelem);
    
    m_VLayout.addWidget(pColorFrame);
    m_VLayout.addWidget(pPropertyWidget);
    setLayout(&m_VLayout);
}

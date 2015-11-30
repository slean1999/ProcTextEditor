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

void CLayerFrame::SetValueString( xml_document<>& doc,xml_node<>* colorlayer )
{
	xml_node<>* colornode = NULL;
	xml_node<>* propertynode = NULL;
	colornode = colorlayer->first_node();
	if (colornode)
	{
		propertynode = colornode->next_sibling();
	}
	CColorFrame*        pColorFrame     = new CColorFrame(this);
	CPropertyWidget*    pPropertyWidget = new CPropertyWidget(this);

	pColorFrame->SetValueString(doc, colornode);
	//pPropertyWidget->SetValueString(doc, propertynode);

	m_VLayout.addWidget(pColorFrame);
	//m_VLayout.addWidget(pPropertyWidget);
	setLayout(&m_VLayout);
}

QString CLayerFrame::GetValueString()
{
    return QString("");
}

void CLayerFrame::CreateSpinBox()
{
    CColorFrame*        pColorFrame     = new CColorFrame(this);
    CPropertyWidget*    pPropertyWidget = new CPropertyWidget(this);
    
//     QDomElement colorelem = m_Elecolortype.firstChildElement();
//     pColorFrame->SetValueString(colorelem);
//     QDomElement propertyelem = colorelem.nextSiblingElement();
//     pPropertyWidget->SetValueString(propertyelem);
    
    m_VLayout.addWidget(pColorFrame);
    m_VLayout.addWidget(pPropertyWidget);
    setLayout(&m_VLayout);
}

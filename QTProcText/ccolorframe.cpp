#include "ccolorframe.h"
#include "inc.h"
#include "cpatternwidget.h"
#include "cpropertywidget.h"
#include "ccolormapwidget.h"
#include "cwarpwidget.h"
#include "cpatternframe.h"
const QString strPattern("pattern");
CColorFrame::CColorFrame(QWidget *parent)
    : BaseWidget(parent)
{

}

CColorFrame::~CColorFrame()
{

}

void CColorFrame::CreateSpinBox()
{
//     if (m_nColorType)
//     {
// 
//     }
//     else
//     {
//         CPatternWidget* pPatternWidget = new CPatternWidget(this);
//         pPatternWidget->SetValueString(m_Elecolortype);
//         CWarpWidget*    pWarpWidget = new CWarpWidget(this);
//         pWarpWidget->SetValueString(m_Elecolortype);
//         CColorMapWidget*pColorMapWidget = new CColorMapWidget(this);
//         pColorMapWidget->SetValueString(m_Elecolortype);
// 
//         m_VLayout.addWidget(pPatternWidget);
//         m_VLayout.addWidget(pWarpWidget);
//         m_VLayout.addWidget(pColorMapWidget);
//         setLayout(&m_VLayout);
//     }
    return ;
}

void CColorFrame::SetValueString(xml_document<>& doc,xml_node<>* root)
{
	xml_node<>* colortype = NULL;
	xml_node<>* colorvalue = NULL;
	colortype = root->first_node();
	xml_attribute<>* pAtti = NULL;
	if (strcmp(colortype->name(),"colortype")== 0)
	{
		pAtti = colortype->first_attribute();
		if (strcmp(pAtti->value(),"color") == 0)
		{
// 			color->colorType = eColor;
// 			color->pColorValue = new Color;
// 			colorvalue = colortype->next_sibling();
// 			ParseColor(colorvalue,color);
			m_nColorType = true;

		}
		else if (strcmp(pAtti->value(),"pattern") == 0)
		{			
			colorvalue = colortype->next_sibling();
			CPatternframe* pPatternframe = new CPatternframe(this);
			pPatternframe->SetValueString(doc, root);
			m_nColorType = false;
		}
	}
}

QString CColorFrame::GetValueString()
{
    return QString("");
}

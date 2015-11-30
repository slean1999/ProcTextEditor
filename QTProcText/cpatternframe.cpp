#include "cpatternframe.h"
#include "cpatternwidget.h"
#include "cwarpwidget.h"
#include "ccolormapwidget.h"
CPatternframe::CPatternframe(QWidget *parent)
	: BaseWidget(parent)
{

}

CPatternframe::~CPatternframe()
{

}

void CPatternframe::SetValueString( xml_document<>& doc,xml_node<>* root )
{
	xml_node<>* pType = root->first_node();
	xml_attribute<>* pAtti = NULL;

	if(strcmp(root->name() ,("colorvalue") )== 0)
	{
		xml_node<>* pSubnode = root->first_node();
		CPatternWidget* pPatternWidget = new CPatternWidget(this);
		pPatternWidget->SetValueString(doc, pSubnode);
		m_VLayout.addWidget(pPatternWidget);
		while (pSubnode)
		{
			if (strcmp(pSubnode->name(),"warp")== 0)
			{
				CWarpWidget* pWarpWidget = new CWarpWidget(this);
				pWarpWidget->SetValueString(doc, root);
				m_VLayout.addWidget(pWarpWidget);
			}
			else if (strcmp(pSubnode->name(),"colormap")== 0)
			{
				CColorMapWidget* pColorMap = new CColorMapWidget(this);
				pColorMap->SetValueString(doc, root);
				m_VLayout.addWidget(pColorMap);
			}
			else if (strcmp(pSubnode->name(),"vals")== 0)
			{
// 				CWarpWidget* pWarpWidget = new CWarpWidget(this);
// 				pWarpWidget->SetValueString(doc, root);
// 				m_vLayout.addWidget(pWarpWidget);
			}
			pSubnode = pSubnode->next_sibling();
		}		
	}
    setLayout(&m_VLayout);
}

QString CPatternframe::GetValueString()
{
	return "";
}

void CPatternframe::CreateSpinBox()
{

}

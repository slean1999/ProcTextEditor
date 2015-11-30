#include "cwarpwidget.h"

CWarpWidget::CWarpWidget(QWidget *parent) :
    BaseWidget(parent)
{
}


void CWarpWidget::SetValueString(xml_document<>& doc,xml_node<>* root)
{
	xml_attribute<>* pAtti = NULL;
	xml_node<>* pSubnode = root->first_node();

	if (strcmp(root->name(),"warp")== 0)
	{
		while(1)
		{
			if (strcmp(pSubnode->name(),"warptype") == 0)
			{
// 				_WARP* pWarp = new _WARP;		
// 				pAtti = pSubnode->first_attribute();
// 				int nIndex = 0;
// 				WarpIndex(std::string(pAtti->value()),nIndex,1);
// 				pWarp->warpType = (eWarpType)nIndex;
// 				ParseXMLToWarpValue(pSubnode,pPattern->type,nIndex,pWarp);
// 				pPattern->vWarps.push_back(pWarp);
			}
			pSubnode = pSubnode->next_sibling();
			if (pSubnode == NULL)
			{
				break;
			}
		}
	}
   
}

QString CWarpWidget::GetValueString()
{
    return QString("");
}

void CWarpWidget::CreateSpinBox()
{

}

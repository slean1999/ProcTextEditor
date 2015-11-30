#include "cctrlframe.h"
#include "clayerframe.h"
CCtrlFrame::CCtrlFrame(QWidget *parent)
	: QWidget(parent)
{

}

CCtrlFrame::CCtrlFrame( const QString filename,QWidget *parent )
	:QWidget(parent)
{
    create(filename);
}

CCtrlFrame::~CCtrlFrame()
{

}

void CCtrlFrame::create( QString filename )
{
	file<> fdoc(filename.toStdString().c_str());
	xml_document<>   doc;    
	doc.parse<0>(fdoc.data()); 

	xml_node<>* root = doc.first_node();

	if (strcmp(root->name(),"material") == 0)
	{		
		createLayer(doc, root);
	}

}

bool CCtrlFrame::createLayer( xml_document<>& doc,xml_node<>* root )
{
	xml_node<>* colorlayer = NULL;
	xml_node<>* colornode = NULL;
	xml_node<>* propertynode = NULL;
	colorlayer = root->first_node();
	while(1)
	{
		colornode = colorlayer->first_node();
		if (colornode)
		{
			propertynode = colornode->next_sibling();
		}
		if (colornode && propertynode)
		{
			CLayerFrame* pLayer = new CLayerFrame(this);
			pLayer->SetValueString(doc, colorlayer);
			m_vLayerLayout.addWidget(pLayer);
		}
		colorlayer = colorlayer->next_sibling();
		if (!colorlayer)
		{
			break;
		}
	}
    setLayout(&m_vLayerLayout);
    return true;
}

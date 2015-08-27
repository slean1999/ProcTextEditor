#include "ccolorframe.h"
#include "inc.h"
#include "cpatternwidget.h"
#include "cpropertywidget.h"
#include "ccolormapwidget.h"
#include "cwarpwidget.h"
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
    if (m_nColorType)
    {

    }
    else
    {
        CPatternWidget* pPatternWidget = new CPatternWidget(this);
        pPatternWidget->SetValueString(m_Elecolortype);
        CWarpWidget*    pWarpWidget = new CWarpWidget(this);
        pWarpWidget->SetValueString(m_Elecolortype);
        CColorMapWidget*pColorMapWidget = new CColorMapWidget(this);
        pColorMapWidget->SetValueString(m_Elecolortype);

        m_VLayout.addWidget(pPatternWidget);
        m_VLayout.addWidget(pWarpWidget);
        m_VLayout.addWidget(pColorMapWidget);
        setLayout(&m_VLayout);
    }
    return ;
}

void CColorFrame::SetValueString( const QDomElement& colorDomEle )
{
    m_Elecolortype = colorDomEle;
    QString strcolortype = m_Elecolortype.attributeNode("type").value();
    m_nColorType = (strcolortype.compare(strPattern) == 0);
    CreateSpinBox();    
}

QString CColorFrame::GetValueString()
{
    return QString("");
}

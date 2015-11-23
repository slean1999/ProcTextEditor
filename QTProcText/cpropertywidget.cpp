#include "cpropertywidget.h"

CPropertyWidget::CPropertyWidget(QWidget* parent)
    : BaseWidget(parent)
{
    memset(&m_property,0,sizeof(m_property));
}

void CPropertyWidget::SetValueString(xml_document<>& doc,xml_node<>* root)
{
//     QStringList list = strValue.split("\n");
//     QString strDiffuse              = GetStringValue(list[0]);
//     QString strBrilliance           = GetStringValue(list[1]);
//     QString strSpecular             = GetStringValue(list[2]);
//     QString strRough                = GetStringValue(list[3]);
//     QString strvAmbient             = GetStringValue(list[4]);
//     QString strreflection_Max       = GetStringValue(list[5]);
//     QString strreflection_Min       = GetStringValue(list[6]);
//     QString strreflection_Falloff   = GetStringValue(list[7]);
// 
//     m_property.fDiffuse     = strDiffuse.toFloat();
//     m_property.fBrillance   = strBrilliance.toFloat();
//     m_property.fSpecular    = strSpecular.toFloat();
//     m_property.fRoughness   = strRough.toFloat();
//     m_property.fFalloff     = strreflection_Falloff.toFloat();
//     ParseVectorValue(strvAmbient, m_property.vAmbient);
//     ParseVectorValue(strreflection_Max, m_property.vRelc_max);
//     ParseVectorValue(strreflection_Min, m_property.vRelc_min);

}

QString CPropertyWidget::GetStringValue(const QString &strValue)
{
    QRegExp rx("\"");
    int nOperator = 0;
    std::vector<int> vOperator;

    while ((nOperator = rx.indexIn(strValue, nOperator)) != -1)
    {
        vOperator.push_back(nOperator);
        nOperator += rx.matchedLength();
    }
    if (vOperator.size() == 2)
    {
        return strValue.mid(vOperator[0], vOperator[1]);
    }
    else
    {
        return QString("");
    }
}

bool CPropertyWidget::ParseVectorValue(const QString &strValue, float value[])
{
    QStringList list = strValue.split(" ");
    int i = 0;
    foreach (auto str, list)
    {
        value[i++] = str.toFloat();
    }
    return true;
}

QString CPropertyWidget::GetValueString()
{
    return QString("");
}

void CPropertyWidget::CreateSpinBox()
{    
    m_pDiffuseSpin.setValue(m_property.fDiffuse);
    m_pBrillanceSpin.setValue(m_property.fBrillance);
    m_pSpecSpin.setValue(m_property.fSpecular);
    m_pRoughSpin.setValue(m_property.fRoughness);
    m_pFalloffSpin.setValue(m_property.fFalloff);

    for (int i = 0; i < 3 ;++i)
    {
        m_pvAmibentSpin[i].setValue(m_property.vAmbient[i]);
        m_pvRelfmaxSpin[i].setValue(m_property.vRelc_max[i]);
        m_pvRelfminSpin[i].setValue(m_property.vRelc_min[i]);
    }

}

void CPropertyWidget::StringToData()
{

}

void CPropertyWidget::DataToString()
{

}

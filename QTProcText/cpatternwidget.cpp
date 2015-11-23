#include "cpatternwidget.h"

std::map<int,QString>::value_type g_map_init[] =
{
    std::map<int, QString>::value_type(eGRANITE_PATTERN, "eGRANITE_PATTERN"),

    std::map<int, QString>::value_type(eRAMP_WAVE, "eRAMP_WAVE"),
};


const std::map<int,QString> g_mapPattern(g_map_init,g_map_init + 1);
const std::map<int,QString> g_mapWave(g_map_init + 1,g_map_init + 2);
const std::map<int,QString> g_mapAll(g_map_init ,g_map_init + 2);

CPatternWidget::CPatternWidget(QWidget *parent) :
    BaseWidget(parent)
{
    foreach (auto iter, g_mapPattern)
    {
        int nKey = iter.first;
        m_PatternComb.addItem(QString::number(nKey), iter.second);
    }

    foreach (auto iter, g_mapWave)
    {
        int nKey = iter.first;
        m_WaveComb.addItem(QString::number(nKey), iter.second);
    }
}

void CPatternWidget::SetValueString(xml_document<>& doc,xml_node<>* pSubnode)
{
	xml_attribute<>* pAtti = NULL;
	if (strcmp(pSubnode->name(),"patterntype")== 0)
	{
		pAtti = pSubnode->first_attribute();
		int nIndex = 0;
		std::string str(pAtti->value());
		m_Pattern = (ePattern)nIndex;
	}

	pSubnode = pSubnode->next_sibling();
	if (strcmp(pSubnode->name(),"patternWaveType")== 0)
	{
		pAtti = pSubnode->first_attribute();
		int nIndex = 0;
		std::string str(pAtti->value());
		m_WavePattern = (ePattern)nIndex;
		// 			WaveIndex(str, nIndex,1);
		// 			pPattern->wavetype = (ePatternWaveType)nIndex;	
	}

	pSubnode = pSubnode->next_sibling();
	if (strcmp(pSubnode->name(),"frenqucy")== 0)
	{
		pAtti = pSubnode->first_attribute();
		m_fFrenqucy = atof(pAtti->value());	
	}

	pSubnode = pSubnode->next_sibling();
	if (strcmp(pSubnode->name(),"phase")== 0)
	{
		pAtti = pSubnode->first_attribute();
		m_fPhase = atof(pAtti->value());	
	}

	m_PatternComb.setCurrentIndex(m_Pattern);
	m_WaveComb.setCurrentIndex(m_WavePattern);
	m_FrenqucySpin.setValue(m_fFrenqucy);
	m_PhaseSpin.setValue(m_fPhase);
}

QString CPatternWidget::GetValueString()
{
    return QString("");
}

void CPatternWidget::CreateSpinBox()
{
    m_PatternComb.setCurrentIndex(m_Pattern);
    m_WaveComb.setCurrentIndex(m_WavePattern);
    m_FrenqucySpin.setValue(m_fFrenqucy);
    m_PhaseSpin.setValue(m_fPhase);
    //m_FrenqucySpin.setAlignment(Qt::AlignCenter);
    //m_gridLayout.addWidget(&m_FrenqucySpin,i,j);
    //m_PhaseSpin.setAlignment(Qt::AlignCenter);
    //m_gridLayout.addWidget(&m_PhaseSpin,i,j);
}

QString CPatternWidget::GetStringValue(const QString &strValue)
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

int CPatternWidget::GetPatternType(const QString &strValue)
{
    foreach (auto iter, g_mapAll)
    {
        if (strValue.compare(iter.second) == 0)
        {
            return iter.first;
        }
    }
}

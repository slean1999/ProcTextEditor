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

void CPatternWidget::SetValueString(const QDomElement& colorDomEle)
{
//     QStringList list = strValue.split("\n");
//     QString strPatternType  = GetStringValue(list[0]);
//     QString strWaveType     = GetStringValue(list[1]);
//     QString strFrenqucy     = GetStringValue(list[2]);
//     QString strPhase        = GetStringValue(list[3]);
// 
//     m_Pattern       = (ePattern)GetPatternType(strPatternType);
//     m_WavePattern   = (ePattern)GetPatternType(strWaveType);
//     m_fFrenqucy     = strFrenqucy.toFloat();
//     m_fPhase        = strPhase.toFloat();

    CreateSpinBox();
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

#include "ccolormapwidget.h"

CColorMapWidget::CColorMapWidget(QWidget* parent):BaseWidget(parent)
{
}


void CColorMapWidget::SetValueString(const QString &strValue)
{

}

QString CColorMapWidget::GetValueString()
{
    return QString("");
}

void CColorMapWidget::CreateSpinBox()
{    
    foreach (auto pSpin, m_vpSpinBox)
    {
        delete[] pSpin;
    }
    m_vpSpinBox.clear();

    foreach (auto data, m_lsData)
    {
        _Color* pColor = (_Color*)&data;
        QDoubleSpinBox* pSpin = new QDoubleSpinBox[6];
        pSpin[0].setValue(pColor->fValue);
        pSpin[1].setValue(pColor->fR);
        pSpin[2].setValue(pColor->fG);
        pSpin[3].setValue(pColor->fB);
        pSpin[4].setValue(pColor->fA);
        pSpin[5].setValue(pColor->fWeight);        

        m_vpSpinBox.push_back(pSpin);
    }

    int nRow = m_vpSpinBox.size();
    for (int i = 0; i < nRow; ++i)
    {
        QDoubleSpinBox* pSpin = m_vpSpinBox[i];
        for (int j = 0; j < 5; ++j)
        {
            pSpin[j].setRange(0,1);
            pSpin[j].setSingleStep(0.01);
            pSpin[j].setMinimumSize(55,0);
            pSpin[j].setAlignment(Qt::AlignCenter);
            m_gridLayout.addWidget(&pSpin[j],i,j);
        }
    }

}

void CColorMapWidget::AddRowData(int nRowIndex, _Color *pData)
{
    auto iter = m_lsData.begin();
    int nDataSize = m_lsData.size();
    if (nDataSize <= nRowIndex)
    {
        iter = m_lsData.end();
    }
    else
    {
        for (int i = 0; i < nRowIndex; ++i)
        {
            ++iter;
        }
    }
    m_lsData.insert(iter, *pData);
}

void CColorMapWidget::DelteRowDate(int nRowIndex)
{
    if (m_lsData.empty())
        return;

    auto iter = m_lsData.begin();
    int nDataSize = m_lsData.size();
    if (nDataSize <= nRowIndex)
    {
        m_lsData.pop_back();
    }
    else
    {
        for (int i = 0; i < nRowIndex; ++i)
        {
            ++iter;
        }
        m_lsData.erase(iter);
    }
}

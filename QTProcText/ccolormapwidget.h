#ifndef CCOLORWIDGET_H
#define CCOLORWIDGET_H
#include <QDoubleSpinBox>
#include <QGridLayout>
#include "basewidget.h"
#include "BaseDef.h"

class CColorMapWidget : public BaseWidget
{
public:
    CColorMapWidget(QWidget* parent = 0);
    virtual void    SetValueString(const QDomElement& colorDomEle);
    virtual QString GetValueString();
    virtual void    CreateSpinBox();    

    void                AddRowData(int nRowIndex, _Color* pData);
    void                DelteRowDate(int nRowIndex);
private:
    void                StringToData();
    void                DataToString();
    _Color              ParseString(const QString& strValue);
private:
    std::list<_Color>                   m_lsData;
    std::vector<QDoubleSpinBox*>        m_vpSpinBox;
    QGridLayout                         m_gridLayout;
};

#endif // CCOLORWIDGET_H

#ifndef CCOLORWIDGET_H
#define CCOLORWIDGET_H
#include <QDoubleSpinBox>
#include "basewidget.h"
#include "BaseDef.h"

class CColorMapWidget : public BaseWidget
{
public:
    CColorMapWidget(QWidget* parent = 0);
    virtual void    SetValueString(const QString& strValue);
    virtual QString GetValueString();
    virtual void    CreateSpinBox();


    void                AddRowData(int nRowIndex, _Color* pData);
    void                DelteRowDate(int nRowIndex);
private:
    void                StringToData();
    void                DataToString();
private:
    std::list<_Color>                   m_lsData;
    std::vector<QDoubleSpinBox*>        m_vSpinBox;
};

#endif // CCOLORWIDGET_H

#ifndef CPATTERNWIDGET_H
#define CPATTERNWIDGET_H

#include <QWidget>
#include "BaseDef.h"
#include "basewidget.h"
#include <QDoubleSpinBox>
#include <QComboBox>

class CPatternWidget : public BaseWidget
{
    Q_OBJECT
public:
    explicit CPatternWidget(QWidget *parent = 0);
    virtual void    SetValueString(const QString& strValue);
    virtual QString GetValueString();
    virtual void    CreateSpinBox();
private:
    ePattern        m_Pattern;
    eWaveType       m_WavePattern;
    float           m_fFrenqucy;
    float           m_fPhase;
private:
    QDoubleSpinBox* m_pFrenqucySpin;
    QDoubleSpinBox* m_pPhaseSpin;
    QComboBox*      m_pPatternComb;
    QComboBox*      m_pWaveComb;
signals:

public slots:

};

#endif // CPATTERNWIDGET_H

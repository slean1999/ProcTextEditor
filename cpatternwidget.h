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
    ePattern        m_WavePattern;
    float           m_fFrenqucy;
    float           m_fPhase;
    QString         GetStringValue(const QString& strValue);
    int             GetPatternType(const QString& strValue);
private:
    QDoubleSpinBox  m_FrenqucySpin;
    QDoubleSpinBox  m_PhaseSpin;
    QComboBox       m_PatternComb;
    QComboBox       m_WaveComb;
signals:

public slots:

};

#endif // CPATTERNWIDGET_H

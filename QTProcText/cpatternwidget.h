#ifndef CPATTERNWIDGET_H
#define CPATTERNWIDGET_H

#include <QWidget>
#include "BaseDef.h"
#include "basewidget.h"
#include <QDoubleSpinBox>
#include <QComboBox>
#include <QHBoxLayout>
class CPatternWidget : public BaseWidget
{
    Q_OBJECT
public:
    explicit CPatternWidget(QWidget *parent = 0);
    virtual void    SetValueString(xml_document<>& doc,xml_node<>* root);
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
    QHBoxLayout     m_HLayout;

signals:
public slots:

};

#endif // CPATTERNWIDGET_H

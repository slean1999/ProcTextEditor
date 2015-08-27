#ifndef BASEWIDGET_H
#define BASEWIDGET_H

#include <QWidget>
#include <QDoubleSpinBox>
#include "inc.h"
class BaseWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BaseWidget(QWidget *parent = 0);    
    virtual void SetValueString(const QDomElement& colorDomEle) = 0;
    virtual QString GetValueString() = 0;
    virtual void CreateSpinBox() = 0;

signals:

public slots:

};

#endif // BASEWIDGET_H

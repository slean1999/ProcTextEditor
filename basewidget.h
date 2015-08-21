#ifndef BASEWIDGET_H
#define BASEWIDGET_H

#include <QWidget>
#include <QDoubleSpinBox>

class BaseWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BaseWidget(QWidget *parent = 0);
    virtual void SetValue(void*) = 0;
    virtual void SetValueString(const QString& strValue) = 0;
    virtual QString GetValueString() = 0;
    virtual void CreateSpinBox() = 0;

signals:

public slots:

};

#endif // BASEWIDGET_H

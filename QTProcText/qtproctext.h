#ifndef QTPROCTEXT_H
#define QTPROCTEXT_H

#include <QtWidgets/QMainWindow>
#include "ui_qtproctext.h"

class QTProcText : public QMainWindow
{
    Q_OBJECT

public:
    QTProcText(QWidget *parent = 0);
    ~QTProcText();

private:
    Ui::QTProcTextClass ui;
};

#endif // QTPROCTEXT_H

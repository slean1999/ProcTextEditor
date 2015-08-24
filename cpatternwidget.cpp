#include "cpatternwidget.h"

CPatternWidget::CPatternWidget(QWidget *parent) :
    BaseWidget(parent)
{
}

void CPatternWidget::SetValueString(const QString &strValue)
{
    QStringList list = strValue.split("\n");

    QRegExp rx("\"");  // 匹配运算符
    int nOperator = 0;
    std::vector<int> vOperator;

    while ((nOperator = rx.indexIn(strTest, nOperator)) != -1)
    {
        vOperator.push_back(nOperator);
        nOperator += rx.matchedLength();
    }

    CreateSpinBox();
}

QString CPatternWidget::GetValueString()
{
    return QString("");
}

void CPatternWidget::CreateSpinBox()
{

}

#ifndef CPATTERNFRAME_H
#define CPATTERNFRAME_H

#include <QVBoxLayout>
#include "basewidget.h"
#include "BaseDef.h"
class CPatternframe : public BaseWidget
{
	Q_OBJECT

public:
	CPatternframe(QWidget *parent);
	~CPatternframe();
	virtual void SetValueString(xml_document<>& doc,xml_node<>* root);
	virtual QString GetValueString();
	virtual void CreateSpinBox();
private:
	QVBoxLayout		m_VLayout;
};

#endif // CPATTERNFRAME_H

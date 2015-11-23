#ifndef CCTRLFRAME_H
#define CCTRLFRAME_H

#include <QWidget>
#include <QVBoxLayout>
#include "inc.h"
using namespace rapidxml;

class CCtrlFrame : public QWidget
{

	Q_OBJECT

public:
	CCtrlFrame(QWidget *parent);
	CCtrlFrame(const QString filename,QWidget *parent);

	~CCtrlFrame();

private:
	void	create(QString filename);
	bool	createLayer(xml_document<>& doc,xml_node<>* root);
	bool	createWidget(xml_document<>& doc,xml_node<>* root);
private:
	QVBoxLayout     m_vLayerLayout;

};

#endif // CCTRLFRAME_H

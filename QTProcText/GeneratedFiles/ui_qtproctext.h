/********************************************************************************
** Form generated from reading UI file 'qtproctext.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPROCTEXT_H
#define UI_QTPROCTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTProcTextClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTProcTextClass)
    {
        if (QTProcTextClass->objectName().isEmpty())
            QTProcTextClass->setObjectName(QStringLiteral("QTProcTextClass"));
        QTProcTextClass->resize(600, 400);
        menuBar = new QMenuBar(QTProcTextClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QTProcTextClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTProcTextClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTProcTextClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QTProcTextClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QTProcTextClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QTProcTextClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTProcTextClass->setStatusBar(statusBar);

        retranslateUi(QTProcTextClass);

        QMetaObject::connectSlotsByName(QTProcTextClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTProcTextClass)
    {
        QTProcTextClass->setWindowTitle(QApplication::translate("QTProcTextClass", "QTProcText", 0));
    } // retranslateUi

};

namespace Ui {
    class QTProcTextClass: public Ui_QTProcTextClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPROCTEXT_H

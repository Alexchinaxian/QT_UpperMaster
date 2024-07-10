/********************************************************************************
** Form generated from reading UI file 'uppermaster.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPPERMASTER_H
#define UI_UPPERMASTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpperMaster
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UpperMaster)
    {
        if (UpperMaster->objectName().isEmpty())
            UpperMaster->setObjectName(QString::fromUtf8("UpperMaster"));
        UpperMaster->resize(400, 300);
        menuBar = new QMenuBar(UpperMaster);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        UpperMaster->setMenuBar(menuBar);
        mainToolBar = new QToolBar(UpperMaster);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        UpperMaster->addToolBar(mainToolBar);
        centralWidget = new QWidget(UpperMaster);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        UpperMaster->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(UpperMaster);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        UpperMaster->setStatusBar(statusBar);

        retranslateUi(UpperMaster);

        QMetaObject::connectSlotsByName(UpperMaster);
    } // setupUi

    void retranslateUi(QMainWindow *UpperMaster)
    {
        UpperMaster->setWindowTitle(QApplication::translate("UpperMaster", "UpperMaster", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpperMaster: public Ui_UpperMaster {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPPERMASTER_H

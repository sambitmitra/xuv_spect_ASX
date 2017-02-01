/********************************************************************************
** Form generated from reading UI file 'andor_main.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANDOR_MAIN_H
#define UI_ANDOR_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_andor_main
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *andor_main)
    {
        if (andor_main->objectName().isEmpty())
            andor_main->setObjectName(QStringLiteral("andor_main"));
        andor_main->resize(400, 300);
        centralWidget = new QWidget(andor_main);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 75, 23));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 50, 256, 192));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(186, 30, 91, 20));
        andor_main->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(andor_main);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        andor_main->setMenuBar(menuBar);
        mainToolBar = new QToolBar(andor_main);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        andor_main->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(andor_main);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        andor_main->setStatusBar(statusBar);

        retranslateUi(andor_main);

        QMetaObject::connectSlotsByName(andor_main);
    } // setupUi

    void retranslateUi(QMainWindow *andor_main)
    {
        andor_main->setWindowTitle(QApplication::translate("andor_main", "andor_main", 0));
        pushButton->setText(QApplication::translate("andor_main", "Check", 0));
        label->setText(QApplication::translate("andor_main", "Status Messages:", 0));
    } // retranslateUi

};

namespace Ui {
    class andor_main: public Ui_andor_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANDOR_MAIN_H

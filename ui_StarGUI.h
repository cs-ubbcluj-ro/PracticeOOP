/********************************************************************************
** Form generated from reading UI file 'StarGUI.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARGUI_H
#define UI_STARGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StarGUIClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QListWidget *listWidget;
    QGridLayout *gridLayout;
    QPushButton *addButton;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QLabel *label_2;
    QLineEdit *RaLineEdit;
    QLineEdit *decLineEdit;
    QLabel *label_3;
    QLineEdit *diameterLineEdit;
    QPushButton *searchButton;
    QPushButton *viewButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *StarGUIClass)
    {
        if (StarGUIClass->objectName().isEmpty())
            StarGUIClass->setObjectName(QString::fromUtf8("StarGUIClass"));
        StarGUIClass->resize(600, 400);
        centralWidget = new QWidget(StarGUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout->addWidget(tableView);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 0, 1, 1, 2);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        nameLineEdit = new QLineEdit(centralWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        gridLayout->addWidget(nameLineEdit, 1, 1, 1, 2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        RaLineEdit = new QLineEdit(centralWidget);
        RaLineEdit->setObjectName(QString::fromUtf8("RaLineEdit"));

        gridLayout->addWidget(RaLineEdit, 2, 1, 1, 1);

        decLineEdit = new QLineEdit(centralWidget);
        decLineEdit->setObjectName(QString::fromUtf8("decLineEdit"));

        gridLayout->addWidget(decLineEdit, 2, 2, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        diameterLineEdit = new QLineEdit(centralWidget);
        diameterLineEdit->setObjectName(QString::fromUtf8("diameterLineEdit"));

        gridLayout->addWidget(diameterLineEdit, 3, 1, 1, 2);

        searchButton = new QPushButton(centralWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        gridLayout->addWidget(searchButton, 1, 3, 1, 1);

        viewButton = new QPushButton(centralWidget);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));

        gridLayout->addWidget(viewButton, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        StarGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(StarGUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        StarGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(StarGUIClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        StarGUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(StarGUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        StarGUIClass->setStatusBar(statusBar);

        retranslateUi(StarGUIClass);

        QMetaObject::connectSlotsByName(StarGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *StarGUIClass)
    {
        StarGUIClass->setWindowTitle(QCoreApplication::translate("StarGUIClass", "StarGUI", nullptr));
        addButton->setText(QCoreApplication::translate("StarGUIClass", "ADD", nullptr));
        label->setText(QCoreApplication::translate("StarGUIClass", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("StarGUIClass", "Coordinates", nullptr));
        label_3->setText(QCoreApplication::translate("StarGUIClass", "Diameter", nullptr));
        searchButton->setText(QCoreApplication::translate("StarGUIClass", "Search", nullptr));
        viewButton->setText(QCoreApplication::translate("StarGUIClass", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StarGUIClass: public Ui_StarGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARGUI_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionSair;
    QAction *actionModoficar;
    QAction *actionExportar;
    QAction *actionSair_2;
    QAction *actionSObre;
    QAction *actionSobre;
    QWidget *centralWidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QListView *listView1;
    QSpacerItem *verticalSpacer;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QLCDNumber *lcdNumber;
    QTreeView *treeView;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuAjuda;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1206, 718);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QStringLiteral("actionAbrir"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        actionModoficar = new QAction(MainWindow);
        actionModoficar->setObjectName(QStringLiteral("actionModoficar"));
        actionExportar = new QAction(MainWindow);
        actionExportar->setObjectName(QStringLiteral("actionExportar"));
        actionSair_2 = new QAction(MainWindow);
        actionSair_2->setObjectName(QStringLiteral("actionSair_2"));
        actionSObre = new QAction(MainWindow);
        actionSObre->setObjectName(QStringLiteral("actionSObre"));
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 0, 1171, 651));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        listView1 = new QListView(formLayoutWidget);
        listView1->setObjectName(QStringLiteral("listView1"));

        formLayout->setWidget(1, QFormLayout::FieldRole, listView1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer);

        tableWidget = new QTableWidget(formLayoutWidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        formLayout->setWidget(3, QFormLayout::FieldRole, tableWidget);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_3);

        groupBox = new QGroupBox(formLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(10, QFormLayout::FieldRole, verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        formLayout->setLayout(11, QFormLayout::FieldRole, verticalLayout);

        buttonBox = new QDialogButtonBox(formLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(14, QFormLayout::FieldRole, buttonBox);

        lcdNumber = new QLCDNumber(formLayoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lcdNumber);

        treeView = new QTreeView(formLayoutWidget);
        treeView->setObjectName(QStringLiteral("treeView"));

        formLayout->setWidget(2, QFormLayout::LabelRole, treeView);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1206, 25));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QStringLiteral("menuAjuda"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuArquivo->addAction(actionAbrir);
        menuArquivo->addAction(actionSair);
        menuArquivo->addAction(actionModoficar);
        menuArquivo->addAction(actionExportar);
        menuArquivo->addAction(actionSair_2);
        menuAjuda->addAction(actionSObre);
        menuAjuda->addAction(actionSobre);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAbrir->setText(QApplication::translate("MainWindow", "Abrir", 0));
        actionSair->setText(QApplication::translate("MainWindow", "Salvar", 0));
        actionModoficar->setText(QApplication::translate("MainWindow", "Modoficar", 0));
        actionExportar->setText(QApplication::translate("MainWindow", "Exportar", 0));
        actionSair_2->setText(QApplication::translate("MainWindow", "Sair", 0));
        actionSObre->setText(QApplication::translate("MainWindow", "Guia", 0));
        actionSobre->setText(QApplication::translate("MainWindow", "Sobre", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Nome", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Tamanho", 0));
        pushButton->setText(QApplication::translate("MainWindow", "TRANSMUTE!", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", 0));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", 0));
        menuAjuda->setTitle(QApplication::translate("MainWindow", "Ajuda", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

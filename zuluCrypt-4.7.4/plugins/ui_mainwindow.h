/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pbOpen;
    QPushButton *pbCancel;
    QPushButton *pbKeyFile;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditKey;
    QLineEdit *lineEditKeyFile;
    QToolBar *mainToolBar;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(450, 152);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(0, 10, 451, 141));
        pbOpen = new QPushButton(centralWidget);
        pbOpen->setObjectName(QString::fromUtf8("pbOpen"));
        pbOpen->setGeometry(QRect(130, 110, 91, 31));
        pbOpen->setAutoDefault(true);
        pbOpen->setDefault(true);
        pbCancel = new QPushButton(centralWidget);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setGeometry(QRect(220, 110, 91, 31));
        pbCancel->setAutoDefault(true);
        pbKeyFile = new QPushButton(centralWidget);
        pbKeyFile->setObjectName(QString::fromUtf8("pbKeyFile"));
        pbKeyFile->setGeometry(QRect(400, 80, 31, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 351, 31));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, -10, 351, 31));
        label_2->setAlignment(Qt::AlignCenter);
        lineEditKey = new QLineEdit(centralWidget);
        lineEditKey->setObjectName(QString::fromUtf8("lineEditKey"));
        lineEditKey->setGeometry(QRect(50, 20, 351, 31));
        lineEditKeyFile = new QLineEdit(centralWidget);
        lineEditKeyFile->setObjectName(QString::fromUtf8("lineEditKeyFile"));
        lineEditKeyFile->setGeometry(QRect(50, 80, 351, 31));
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 0, 6));
        QWidget::setTabOrder(lineEditKey, lineEditKeyFile);
        QWidget::setTabOrder(lineEditKeyFile, pbKeyFile);
        QWidget::setTabOrder(pbKeyFile, pbOpen);
        QWidget::setTabOrder(pbOpen, pbCancel);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "key module", 0, QApplication::UnicodeUTF8));
        pbOpen->setText(QApplication::translate("MainWindow", "&open", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("MainWindow", "&cancel", 0, QApplication::UnicodeUTF8));
        pbKeyFile->setText(QString());
        label->setText(QApplication::translate("MainWindow", "keyfile", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "key", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

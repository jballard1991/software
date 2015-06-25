/********************************************************************************
** Form generated from reading UI file 'password_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORD_DIALOG_H
#define UI_PASSWORD_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_password_dialog
{
public:
    QGroupBox *groupBox;
    QLabel *labelHeader;
    QLineEdit *lineEditKey;
    QLabel *labelWalletDoesNotExist;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QPushButton *pushButtonSend;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonOK_2;

    void setupUi(QDialog *password_dialog)
    {
        if (password_dialog->objectName().isEmpty())
            password_dialog->setObjectName(QString::fromUtf8("password_dialog"));
        password_dialog->resize(501, 157);
        QIcon icon;
        icon.addFile(QString::fromUtf8("lxqt_wallet_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        password_dialog->setWindowIcon(icon);
        groupBox = new QGroupBox(password_dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 481, 141));
        labelHeader = new QLabel(groupBox);
        labelHeader->setObjectName(QString::fromUtf8("labelHeader"));
        labelHeader->setGeometry(QRect(20, 0, 441, 71));
        labelHeader->setAlignment(Qt::AlignCenter);
        labelHeader->setWordWrap(true);
        lineEditKey = new QLineEdit(groupBox);
        lineEditKey->setObjectName(QString::fromUtf8("lineEditKey"));
        lineEditKey->setGeometry(QRect(20, 70, 441, 31));
        lineEditKey->setEchoMode(QLineEdit::Password);
        labelWalletDoesNotExist = new QLabel(groupBox);
        labelWalletDoesNotExist->setObjectName(QString::fromUtf8("labelWalletDoesNotExist"));
        labelWalletDoesNotExist->setGeometry(QRect(10, 10, 461, 91));
        labelWalletDoesNotExist->setAlignment(Qt::AlignCenter);
        textEdit_2 = new QTextEdit(groupBox);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(349, 115, 61, 51));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(420, 120, 41, 31));
        pushButtonSend = new QPushButton(password_dialog);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));
        pushButtonSend->setGeometry(QRect(160, 120, 91, 31));
        pushButtonSend->setDefault(true);
        pushButtonCancel = new QPushButton(password_dialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(250, 120, 91, 31));
        pushButtonOK = new QPushButton(password_dialog);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));
        pushButtonOK->setGeometry(QRect(200, 120, 91, 31));
        pushButtonOK_2 = new QPushButton(password_dialog);
        pushButtonOK_2->setObjectName(QString::fromUtf8("pushButtonOK_2"));
        pushButtonOK_2->setGeometry(QRect(200, 120, 91, 31));

        retranslateUi(password_dialog);

        QMetaObject::connectSlotsByName(password_dialog);
    } // setupUi

    void retranslateUi(QDialog *password_dialog)
    {
        password_dialog->setWindowTitle(QApplication::translate("password_dialog", "lxqt wallet service", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        labelHeader->setText(QApplication::translate("password_dialog", "The application '%1' has requested to open the wallet '%2'.Enter the password below for this wallet to unlock it", 0, QApplication::UnicodeUTF8));
        labelWalletDoesNotExist->setText(QApplication::translate("password_dialog", "wallet '%1' does not exist,do you want to create it?", 0, QApplication::UnicodeUTF8));
        textEdit_2->setHtml(QApplication::translate("password_dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Wallet <span style=\" font-weight:600;\">'%1'</span> does not exist, do you want to create it?</p></body></html>", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("password_dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">An application <span style=\" font-weight:600;\">'%1'</span> has requested to open a wallet<span style=\" font-weight:600;\"> '%2'</span>. Enter the password below for this wallet to unlock it.</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButtonSend->setText(QApplication::translate("password_dialog", "Unlock", 0, QApplication::UnicodeUTF8));
        pushButtonCancel->setText(QApplication::translate("password_dialog", "Cancel", 0, QApplication::UnicodeUTF8));
        pushButtonOK->setText(QApplication::translate("password_dialog", "ok", 0, QApplication::UnicodeUTF8));
        pushButtonOK_2->setText(QApplication::translate("password_dialog", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class password_dialog: public Ui_password_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORD_DIALOG_H

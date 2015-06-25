/********************************************************************************
** Form generated from reading UI file 'changepassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDDIALOG_H
#define UI_CHANGEPASSWORDDIALOG_H

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

class Ui_changePassWordDialog
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButtonChange;
    QPushButton *pushButtonOK;
    QLineEdit *lineEditCurrentPassWord;
    QLineEdit *lineEditNewPassWord;
    QLineEdit *lineEditNewPassWord_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButtonCancel;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;

    void setupUi(QDialog *changePassWordDialog)
    {
        if (changePassWordDialog->objectName().isEmpty())
            changePassWordDialog->setObjectName(QString::fromUtf8("changePassWordDialog"));
        changePassWordDialog->resize(580, 284);
        QIcon icon;
        icon.addFile(QString::fromUtf8("lxqt_wallet_icon.pngg"), QSize(), QIcon::Normal, QIcon::Off);
        changePassWordDialog->setWindowIcon(icon);
        groupBox = new QGroupBox(changePassWordDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 561, 271));
        pushButtonChange = new QPushButton(groupBox);
        pushButtonChange->setObjectName(QString::fromUtf8("pushButtonChange"));
        pushButtonChange->setGeometry(QRect(190, 240, 91, 31));
        pushButtonOK = new QPushButton(groupBox);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));
        pushButtonOK->setGeometry(QRect(230, 240, 101, 31));
        lineEditCurrentPassWord = new QLineEdit(groupBox);
        lineEditCurrentPassWord->setObjectName(QString::fromUtf8("lineEditCurrentPassWord"));
        lineEditCurrentPassWord->setGeometry(QRect(90, 90, 381, 31));
        lineEditCurrentPassWord->setEchoMode(QLineEdit::Password);
        lineEditNewPassWord = new QLineEdit(groupBox);
        lineEditNewPassWord->setObjectName(QString::fromUtf8("lineEditNewPassWord"));
        lineEditNewPassWord->setGeometry(QRect(90, 150, 381, 31));
        lineEditNewPassWord->setEchoMode(QLineEdit::Password);
        lineEditNewPassWord_2 = new QLineEdit(groupBox);
        lineEditNewPassWord_2->setObjectName(QString::fromUtf8("lineEditNewPassWord_2"));
        lineEditNewPassWord_2->setGeometry(QRect(90, 210, 381, 31));
        lineEditNewPassWord_2->setEchoMode(QLineEdit::Password);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 521, 41));
        label->setText(QString::fromUtf8("\"XXX\" want to change \"YYY\" password"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 60, 561, 31));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 120, 561, 31));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 180, 561, 31));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);
        pushButtonCancel = new QPushButton(groupBox);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(280, 240, 91, 31));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 170, 51, 31));
        textEdit_2 = new QTextEdit(groupBox);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 200, 51, 31));
        QWidget::setTabOrder(lineEditCurrentPassWord, lineEditNewPassWord);
        QWidget::setTabOrder(lineEditNewPassWord, lineEditNewPassWord_2);
        QWidget::setTabOrder(lineEditNewPassWord_2, pushButtonChange);
        QWidget::setTabOrder(pushButtonChange, pushButtonOK);
        QWidget::setTabOrder(pushButtonOK, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, textEdit);
        QWidget::setTabOrder(textEdit, textEdit_2);

        retranslateUi(changePassWordDialog);

        QMetaObject::connectSlotsByName(changePassWordDialog);
    } // setupUi

    void retranslateUi(QDialog *changePassWordDialog)
    {
        changePassWordDialog->setWindowTitle(QApplication::translate("changePassWordDialog", "change wallet's password", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        pushButtonChange->setText(QApplication::translate("changePassWordDialog", "Change", 0, QApplication::UnicodeUTF8));
        pushButtonOK->setText(QApplication::translate("changePassWordDialog", "Ok", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("changePassWordDialog", "Enter current password below.", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("changePassWordDialog", "Enter new password below.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("changePassWordDialog", "Re enter new password below.", 0, QApplication::UnicodeUTF8));
        pushButtonCancel->setText(QApplication::translate("changePassWordDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("changePassWordDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">An application '<span style=\" font-weight:600;\">%1</span>' has made a request for a password of its wallet '<span style=\" font-weight:600;\">%2</span>' to be changed</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        textEdit_2->setHtml(QApplication::translate("changePassWordDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter password information below to create a new wallet '<span style=\" font-weight:600;\">%1</span>' for application '<span style=\" font-weight:600;\">%2</span>'</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class changePassWordDialog: public Ui_changePassWordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDDIALOG_H

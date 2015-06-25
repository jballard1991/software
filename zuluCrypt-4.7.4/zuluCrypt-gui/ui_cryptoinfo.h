/********************************************************************************
** Form generated from reading UI file 'cryptoinfo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRYPTOINFO_H
#define UI_CRYPTOINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cryptoinfo
{
public:
    QPushButton *pbOK;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_12;
    QFrame *line;
    QLabel *label_14;
    QFrame *line_2;
    QLabel *label_6;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *label_13;
    QLabel *label_8;

    void setupUi(QWidget *cryptoinfo)
    {
        if (cryptoinfo->objectName().isEmpty())
            cryptoinfo->setObjectName(QString::fromUtf8("cryptoinfo"));
        cryptoinfo->setWindowModality(Qt::ApplicationModal);
        cryptoinfo->resize(482, 360);
        pbOK = new QPushButton(cryptoinfo);
        pbOK->setObjectName(QString::fromUtf8("pbOK"));
        pbOK->setGeometry(QRect(190, 320, 101, 31));
        label = new QLabel(cryptoinfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 20, 481, 31));
        label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(cryptoinfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 50, 481, 31));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(cryptoinfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 70, 481, 31));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(cryptoinfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 90, 481, 31));
        label_5->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(cryptoinfo);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 120, 481, 31));
        label_10->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(cryptoinfo);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 170, 481, 31));
        label_12->setAlignment(Qt::AlignCenter);
        line = new QFrame(cryptoinfo);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 110, 481, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_14 = new QLabel(cryptoinfo);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 190, 481, 31));
        label_14->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(cryptoinfo);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 10, 481, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(cryptoinfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 150, 481, 31));
        label_6->setAlignment(Qt::AlignCenter);
        line_3 = new QFrame(cryptoinfo);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 40, 481, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(cryptoinfo);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 140, 481, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(cryptoinfo);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 210, 481, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(cryptoinfo);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(0, 240, 481, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(cryptoinfo);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 220, 481, 31));
        label_11->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(cryptoinfo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 250, 481, 31));
        label_7->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(cryptoinfo);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 270, 481, 31));
        label_13->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(cryptoinfo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 290, 481, 31));
        label_8->setAlignment(Qt::AlignCenter);

        retranslateUi(cryptoinfo);

        QMetaObject::connectSlotsByName(cryptoinfo);
    } // setupUi

    void retranslateUi(QWidget *cryptoinfo)
    {
        cryptoinfo->setWindowTitle(QApplication::translate("cryptoinfo", "crypo info", 0, QApplication::UnicodeUTF8));
        pbOK->setText(QApplication::translate("cryptoinfo", "ok", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("cryptoinfo", "default options for plain volumes", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("cryptoinfo", "cipher: aes-cbc-essiv:sha256", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("cryptoinfo", "keysize: 256 bits", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("cryptoinfo", "password hash: ripemd160", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("cryptoinfo", "default creation options for luks volumes", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("cryptoinfo", "keysize: 256 bits", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("cryptoinfo", "luks header hashing: sha1", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("cryptoinfo", "cipher: aes-xts-plain64", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("cryptoinfo", "default creation options for truecrypt volumes", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("cryptoinfo", "cipher: aes-xts-plain64", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("cryptoinfo", "keysize: 256 bits", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("cryptoinfo", "hash: ripemd160", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class cryptoinfo: public Ui_cryptoinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYPTOINFO_H

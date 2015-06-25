/********************************************************************************
** Form generated from reading UI file 'managevolumeheader.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEVOLUMEHEADER_H
#define UI_MANAGEVOLUMEHEADER_H

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
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_managevolumeheader
{
public:
    QLineEdit *lineEditBackUpName;
    QLabel *labelBackUpHeader;
    QPushButton *pbOpenFolder;
    QPushButton *pbCreate;
    QPushButton *pbCancel;
    QLabel *labelDevicePath;
    QLineEdit *lineEditDevicePath;
    QPushButton *pushButtonFile;
    QPushButton *pushButtonPartition;
    QGroupBox *groupBox;
    QLineEdit *lineEditPassWord;
    QPushButton *pBKeyFile;
    QRadioButton *rbKey;
    QRadioButton *rbKeyFile;
    QLabel *label;
    QGroupBox *groupBox_2;
    QRadioButton *rbNormalTrueCrypt;
    QRadioButton *rbSystemTrueCrypt;
    QRadioButton *rbFDETrueCrypt;
    QGroupBox *groupBox_3;
    QRadioButton *rbLuksHeader;
    QRadioButton *rbTrueCryptHeader;

    void setupUi(QDialog *managevolumeheader)
    {
        if (managevolumeheader->objectName().isEmpty())
            managevolumeheader->setObjectName(QString::fromUtf8("managevolumeheader"));
        managevolumeheader->setWindowModality(Qt::ApplicationModal);
        managevolumeheader->resize(561, 414);
        lineEditBackUpName = new QLineEdit(managevolumeheader);
        lineEditBackUpName->setObjectName(QString::fromUtf8("lineEditBackUpName"));
        lineEditBackUpName->setGeometry(QRect(120, 40, 321, 31));
        labelBackUpHeader = new QLabel(managevolumeheader);
        labelBackUpHeader->setObjectName(QString::fromUtf8("labelBackUpHeader"));
        labelBackUpHeader->setGeometry(QRect(10, 40, 101, 31));
        labelBackUpHeader->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBackUpHeader->setWordWrap(true);
        pbOpenFolder = new QPushButton(managevolumeheader);
        pbOpenFolder->setObjectName(QString::fromUtf8("pbOpenFolder"));
        pbOpenFolder->setGeometry(QRect(440, 40, 31, 31));
        pbCreate = new QPushButton(managevolumeheader);
        pbCreate->setObjectName(QString::fromUtf8("pbCreate"));
        pbCreate->setGeometry(QRect(200, 380, 81, 31));
        pbCreate->setAutoDefault(true);
        pbCreate->setDefault(true);
        pbCancel = new QPushButton(managevolumeheader);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setGeometry(QRect(280, 380, 81, 31));
        pbCancel->setAutoDefault(true);
        pbCancel->setDefault(false);
        labelDevicePath = new QLabel(managevolumeheader);
        labelDevicePath->setObjectName(QString::fromUtf8("labelDevicePath"));
        labelDevicePath->setGeometry(QRect(0, 10, 111, 31));
        labelDevicePath->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelDevicePath->setWordWrap(true);
        lineEditDevicePath = new QLineEdit(managevolumeheader);
        lineEditDevicePath->setObjectName(QString::fromUtf8("lineEditDevicePath"));
        lineEditDevicePath->setGeometry(QRect(120, 10, 321, 31));
        pushButtonFile = new QPushButton(managevolumeheader);
        pushButtonFile->setObjectName(QString::fromUtf8("pushButtonFile"));
        pushButtonFile->setGeometry(QRect(440, 10, 31, 31));
        pushButtonPartition = new QPushButton(managevolumeheader);
        pushButtonPartition->setObjectName(QString::fromUtf8("pushButtonPartition"));
        pushButtonPartition->setGeometry(QRect(470, 10, 31, 31));
        groupBox = new QGroupBox(managevolumeheader);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 250, 501, 131));
        lineEditPassWord = new QLineEdit(groupBox);
        lineEditPassWord->setObjectName(QString::fromUtf8("lineEditPassWord"));
        lineEditPassWord->setGeometry(QRect(90, 90, 321, 31));
        lineEditPassWord->setEchoMode(QLineEdit::Password);
        pBKeyFile = new QPushButton(groupBox);
        pBKeyFile->setObjectName(QString::fromUtf8("pBKeyFile"));
        pBKeyFile->setGeometry(QRect(410, 90, 31, 31));
        rbKey = new QRadioButton(groupBox);
        rbKey->setObjectName(QString::fromUtf8("rbKey"));
        rbKey->setGeometry(QRect(90, 0, 401, 31));
        rbKey->setChecked(true);
        rbKeyFile = new QRadioButton(groupBox);
        rbKeyFile->setObjectName(QString::fromUtf8("rbKeyFile"));
        rbKeyFile->setGeometry(QRect(90, 30, 401, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 481, 31));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        groupBox_2 = new QGroupBox(managevolumeheader);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 140, 501, 111));
        rbNormalTrueCrypt = new QRadioButton(groupBox_2);
        rbNormalTrueCrypt->setObjectName(QString::fromUtf8("rbNormalTrueCrypt"));
        rbNormalTrueCrypt->setGeometry(QRect(90, 0, 401, 31));
        rbNormalTrueCrypt->setChecked(true);
        rbSystemTrueCrypt = new QRadioButton(groupBox_2);
        rbSystemTrueCrypt->setObjectName(QString::fromUtf8("rbSystemTrueCrypt"));
        rbSystemTrueCrypt->setGeometry(QRect(90, 30, 401, 31));
        rbFDETrueCrypt = new QRadioButton(groupBox_2);
        rbFDETrueCrypt->setObjectName(QString::fromUtf8("rbFDETrueCrypt"));
        rbFDETrueCrypt->setGeometry(QRect(90, 60, 401, 31));
        groupBox_3 = new QGroupBox(managevolumeheader);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 70, 501, 71));
        rbLuksHeader = new QRadioButton(groupBox_3);
        rbLuksHeader->setObjectName(QString::fromUtf8("rbLuksHeader"));
        rbLuksHeader->setGeometry(QRect(90, 0, 401, 31));
        rbLuksHeader->setChecked(true);
        rbTrueCryptHeader = new QRadioButton(groupBox_3);
        rbTrueCryptHeader->setObjectName(QString::fromUtf8("rbTrueCryptHeader"));
        rbTrueCryptHeader->setGeometry(QRect(90, 30, 401, 31));
        lineEditBackUpName->raise();
        labelBackUpHeader->raise();
        pbOpenFolder->raise();
        pbCreate->raise();
        pbCancel->raise();
        labelDevicePath->raise();
        lineEditDevicePath->raise();
        pushButtonFile->raise();
        pushButtonPartition->raise();
        groupBox->raise();
        groupBox_2->raise();
        rbNormalTrueCrypt->raise();
        groupBox_3->raise();
        QWidget::setTabOrder(lineEditDevicePath, pushButtonFile);
        QWidget::setTabOrder(pushButtonFile, pushButtonPartition);
        QWidget::setTabOrder(pushButtonPartition, lineEditBackUpName);
        QWidget::setTabOrder(lineEditBackUpName, pbOpenFolder);
        QWidget::setTabOrder(pbOpenFolder, rbLuksHeader);
        QWidget::setTabOrder(rbLuksHeader, rbTrueCryptHeader);
        QWidget::setTabOrder(rbTrueCryptHeader, rbNormalTrueCrypt);
        QWidget::setTabOrder(rbNormalTrueCrypt, rbSystemTrueCrypt);
        QWidget::setTabOrder(rbSystemTrueCrypt, rbFDETrueCrypt);
        QWidget::setTabOrder(rbFDETrueCrypt, rbKey);
        QWidget::setTabOrder(rbKey, rbKeyFile);
        QWidget::setTabOrder(rbKeyFile, lineEditPassWord);
        QWidget::setTabOrder(lineEditPassWord, pBKeyFile);
        QWidget::setTabOrder(pBKeyFile, pbCreate);
        QWidget::setTabOrder(pbCreate, pbCancel);

        retranslateUi(managevolumeheader);

        QMetaObject::connectSlotsByName(managevolumeheader);
    } // setupUi

    void retranslateUi(QDialog *managevolumeheader)
    {
        managevolumeheader->setWindowTitle(QApplication::translate("managevolumeheader", "backup volume header", 0, QApplication::UnicodeUTF8));
        labelBackUpHeader->setText(QApplication::translate("managevolumeheader", "backup name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbOpenFolder->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pbOpenFolder->setText(QString());
        pbCreate->setText(QApplication::translate("managevolumeheader", "c&reate", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("managevolumeheader", "&cancel", 0, QApplication::UnicodeUTF8));
        labelDevicePath->setText(QApplication::translate("managevolumeheader", "volume path", 0, QApplication::UnicodeUTF8));
        pushButtonFile->setText(QString());
        pushButtonPartition->setText(QString());
        groupBox->setTitle(QString());
        pBKeyFile->setText(QString());
        rbKey->setText(QApplication::translate("managevolumeheader", "key", 0, QApplication::UnicodeUTF8));
        rbKeyFile->setText(QApplication::translate("managevolumeheader", "keyfile", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("managevolumeheader", "key", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        rbNormalTrueCrypt->setText(QApplication::translate("managevolumeheader", "normal volume", 0, QApplication::UnicodeUTF8));
        rbSystemTrueCrypt->setText(QApplication::translate("managevolumeheader", "windows system volume", 0, QApplication::UnicodeUTF8));
        rbFDETrueCrypt->setText(QApplication::translate("managevolumeheader", "whole drive encrypted volume", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QString());
        rbLuksHeader->setText(QApplication::translate("managevolumeheader", "manage a luks header", 0, QApplication::UnicodeUTF8));
        rbTrueCryptHeader->setText(QApplication::translate("managevolumeheader", "manage a truecrypt header", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class managevolumeheader: public Ui_managevolumeheader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEVOLUMEHEADER_H

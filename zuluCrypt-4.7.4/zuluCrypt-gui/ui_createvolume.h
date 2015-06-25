/********************************************************************************
** Form generated from reading UI file 'createvolume.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEVOLUME_H
#define UI_CREATEVOLUME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_createvolume
{
public:
    QLineEdit *lineEditVolumePath;
    QLabel *labelVolumePath;
    QPushButton *pbCreate;
    QPushButton *pbCancel;
    QGroupBox *groupBox_3;
    QLineEdit *lineEditPassphrase1;
    QPushButton *pbOpenKeyFile;
    QLabel *labelPassPhrase;
    QLineEdit *lineEditPassPhrase2;
    QLabel *labelRepeatPassPhrase;
    QComboBox *cbNormalVolume;
    QComboBox *comboBoxFS;
    QComboBox *comboBoxVolumeType;
    QComboBox *comboBoxRNG;
    QLabel *labelvolumetype;
    QGroupBox *groupBox;
    QLineEdit *lineEditHiddenKey;
    QLabel *labelHidden;
    QLabel *label_2Hidden;
    QLineEdit *lineEditHiddenKey1;
    QPushButton *pbHiddenKeyFile;
    QLabel *label;
    QLineEdit *lineEditHiddenSize;
    QComboBox *comboBoxHiddenSize;
    QComboBox *cbHiddenVolume;
    QComboBox *comboBoxOptions;
    QLabel *labelvolumeOptions;
    QLabel *labelfs;
    QLabel *labelrng;

    void setupUi(QDialog *createvolume)
    {
        if (createvolume->objectName().isEmpty())
            createvolume->setObjectName(QString::fromUtf8("createvolume"));
        createvolume->setWindowModality(Qt::ApplicationModal);
        createvolume->resize(560, 427);
        createvolume->setAcceptDrops(true);
        lineEditVolumePath = new QLineEdit(createvolume);
        lineEditVolumePath->setObjectName(QString::fromUtf8("lineEditVolumePath"));
        lineEditVolumePath->setGeometry(QRect(130, 10, 301, 31));
        labelVolumePath = new QLabel(createvolume);
        labelVolumePath->setObjectName(QString::fromUtf8("labelVolumePath"));
        labelVolumePath->setGeometry(QRect(0, 10, 121, 31));
        labelVolumePath->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelVolumePath->setWordWrap(true);
        pbCreate = new QPushButton(createvolume);
        pbCreate->setObjectName(QString::fromUtf8("pbCreate"));
        pbCreate->setGeometry(QRect(190, 390, 91, 31));
        pbCreate->setAutoDefault(true);
        pbCreate->setDefault(true);
        pbCancel = new QPushButton(createvolume);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setGeometry(QRect(280, 390, 91, 31));
        pbCancel->setDefault(false);
        groupBox_3 = new QGroupBox(createvolume);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 40, 501, 111));
        lineEditPassphrase1 = new QLineEdit(groupBox_3);
        lineEditPassphrase1->setObjectName(QString::fromUtf8("lineEditPassphrase1"));
        lineEditPassphrase1->setGeometry(QRect(100, 30, 301, 31));
        pbOpenKeyFile = new QPushButton(groupBox_3);
        pbOpenKeyFile->setObjectName(QString::fromUtf8("pbOpenKeyFile"));
        pbOpenKeyFile->setGeometry(QRect(400, 30, 31, 31));
        labelPassPhrase = new QLabel(groupBox_3);
        labelPassPhrase->setObjectName(QString::fromUtf8("labelPassPhrase"));
        labelPassPhrase->setGeometry(QRect(0, 30, 91, 31));
        labelPassPhrase->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelPassPhrase->setWordWrap(true);
        lineEditPassPhrase2 = new QLineEdit(groupBox_3);
        lineEditPassPhrase2->setObjectName(QString::fromUtf8("lineEditPassPhrase2"));
        lineEditPassPhrase2->setGeometry(QRect(100, 60, 301, 31));
        labelRepeatPassPhrase = new QLabel(groupBox_3);
        labelRepeatPassPhrase->setObjectName(QString::fromUtf8("labelRepeatPassPhrase"));
        labelRepeatPassPhrase->setGeometry(QRect(0, 60, 91, 31));
        labelRepeatPassPhrase->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelRepeatPassPhrase->setWordWrap(true);
        cbNormalVolume = new QComboBox(groupBox_3);
        cbNormalVolume->setObjectName(QString::fromUtf8("cbNormalVolume"));
        cbNormalVolume->setGeometry(QRect(100, 0, 301, 31));
        comboBoxFS = new QComboBox(createvolume);
        comboBoxFS->setObjectName(QString::fromUtf8("comboBoxFS"));
        comboBoxFS->setGeometry(QRect(130, 360, 151, 31));
        comboBoxVolumeType = new QComboBox(createvolume);
        comboBoxVolumeType->insertItems(0, QStringList()
         << QString::fromUtf8("plain")
         << QString::fromUtf8("luks")
        );
        comboBoxVolumeType->setObjectName(QString::fromUtf8("comboBoxVolumeType"));
        comboBoxVolumeType->setGeometry(QRect(130, 150, 301, 31));
        comboBoxVolumeType->setLayoutDirection(Qt::LeftToRight);
        comboBoxRNG = new QComboBox(createvolume);
        comboBoxRNG->insertItems(0, QStringList()
         << QString::fromUtf8("/dev/urandom")
         << QString::fromUtf8("/dev/random")
        );
        comboBoxRNG->setObjectName(QString::fromUtf8("comboBoxRNG"));
        comboBoxRNG->setGeometry(QRect(280, 360, 151, 31));
        labelvolumetype = new QLabel(createvolume);
        labelvolumetype->setObjectName(QString::fromUtf8("labelvolumetype"));
        labelvolumetype->setGeometry(QRect(0, 150, 121, 31));
        labelvolumetype->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelvolumetype->setWordWrap(true);
        groupBox = new QGroupBox(createvolume);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 210, 501, 121));
        lineEditHiddenKey = new QLineEdit(groupBox);
        lineEditHiddenKey->setObjectName(QString::fromUtf8("lineEditHiddenKey"));
        lineEditHiddenKey->setGeometry(QRect(100, 30, 301, 31));
        labelHidden = new QLabel(groupBox);
        labelHidden->setObjectName(QString::fromUtf8("labelHidden"));
        labelHidden->setGeometry(QRect(0, 30, 91, 31));
        labelHidden->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelHidden->setWordWrap(true);
        label_2Hidden = new QLabel(groupBox);
        label_2Hidden->setObjectName(QString::fromUtf8("label_2Hidden"));
        label_2Hidden->setGeometry(QRect(0, 60, 91, 31));
        label_2Hidden->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2Hidden->setWordWrap(true);
        lineEditHiddenKey1 = new QLineEdit(groupBox);
        lineEditHiddenKey1->setObjectName(QString::fromUtf8("lineEditHiddenKey1"));
        lineEditHiddenKey1->setGeometry(QRect(100, 60, 301, 31));
        pbHiddenKeyFile = new QPushButton(groupBox);
        pbHiddenKeyFile->setObjectName(QString::fromUtf8("pbHiddenKeyFile"));
        pbHiddenKeyFile->setGeometry(QRect(400, 30, 31, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 90, 91, 31));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setWordWrap(true);
        lineEditHiddenSize = new QLineEdit(groupBox);
        lineEditHiddenSize->setObjectName(QString::fromUtf8("lineEditHiddenSize"));
        lineEditHiddenSize->setGeometry(QRect(100, 90, 121, 31));
        comboBoxHiddenSize = new QComboBox(groupBox);
        comboBoxHiddenSize->setObjectName(QString::fromUtf8("comboBoxHiddenSize"));
        comboBoxHiddenSize->setGeometry(QRect(220, 90, 51, 31));
        cbHiddenVolume = new QComboBox(groupBox);
        cbHiddenVolume->setObjectName(QString::fromUtf8("cbHiddenVolume"));
        cbHiddenVolume->setGeometry(QRect(100, 0, 301, 31));
        comboBoxOptions = new QComboBox(createvolume);
        comboBoxOptions->setObjectName(QString::fromUtf8("comboBoxOptions"));
        comboBoxOptions->setGeometry(QRect(90, 180, 381, 31));
        comboBoxOptions->setLayoutDirection(Qt::LeftToRight);
        labelvolumeOptions = new QLabel(createvolume);
        labelvolumeOptions->setObjectName(QString::fromUtf8("labelvolumeOptions"));
        labelvolumeOptions->setGeometry(QRect(20, 390, 121, 31));
        labelvolumeOptions->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelvolumeOptions->setWordWrap(true);
        labelfs = new QLabel(createvolume);
        labelfs->setObjectName(QString::fromUtf8("labelfs"));
        labelfs->setGeometry(QRect(130, 330, 151, 31));
        labelfs->setAlignment(Qt::AlignCenter);
        labelrng = new QLabel(createvolume);
        labelrng->setObjectName(QString::fromUtf8("labelrng"));
        labelrng->setGeometry(QRect(280, 330, 151, 31));
        labelrng->setAlignment(Qt::AlignCenter);
        QWidget::setTabOrder(lineEditVolumePath, cbNormalVolume);
        QWidget::setTabOrder(cbNormalVolume, pbOpenKeyFile);
        QWidget::setTabOrder(pbOpenKeyFile, lineEditPassphrase1);
        QWidget::setTabOrder(lineEditPassphrase1, lineEditPassPhrase2);
        QWidget::setTabOrder(lineEditPassPhrase2, comboBoxVolumeType);
        QWidget::setTabOrder(comboBoxVolumeType, comboBoxOptions);
        QWidget::setTabOrder(comboBoxOptions, cbHiddenVolume);
        QWidget::setTabOrder(cbHiddenVolume, pbHiddenKeyFile);
        QWidget::setTabOrder(pbHiddenKeyFile, lineEditHiddenKey);
        QWidget::setTabOrder(lineEditHiddenKey, lineEditHiddenKey1);
        QWidget::setTabOrder(lineEditHiddenKey1, lineEditHiddenSize);
        QWidget::setTabOrder(lineEditHiddenSize, comboBoxHiddenSize);
        QWidget::setTabOrder(comboBoxHiddenSize, comboBoxFS);
        QWidget::setTabOrder(comboBoxFS, comboBoxRNG);
        QWidget::setTabOrder(comboBoxRNG, pbCreate);
        QWidget::setTabOrder(pbCreate, pbCancel);

        retranslateUi(createvolume);

        QMetaObject::connectSlotsByName(createvolume);
    } // setupUi

    void retranslateUi(QDialog *createvolume)
    {
        createvolume->setWindowTitle(QApplication::translate("createvolume", "create a new volume", 0, QApplication::UnicodeUTF8));
        labelVolumePath->setText(QApplication::translate("createvolume", "path to device", 0, QApplication::UnicodeUTF8));
        pbCreate->setText(QApplication::translate("createvolume", "c&reate", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("createvolume", "&cancel", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        pbOpenKeyFile->setToolTip(QApplication::translate("createvolume", "open a key file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbOpenKeyFile->setText(QString());
        labelPassPhrase->setText(QApplication::translate("createvolume", "key", 0, QApplication::UnicodeUTF8));
        labelRepeatPassPhrase->setText(QApplication::translate("createvolume", "repeat key", 0, QApplication::UnicodeUTF8));
        cbNormalVolume->clear();
        cbNormalVolume->insertItems(0, QStringList()
         << QApplication::translate("createvolume", "key", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("createvolume", "keyfile", 0, QApplication::UnicodeUTF8)
        );
        labelvolumetype->setText(QApplication::translate("createvolume", "volume type", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        labelHidden->setText(QApplication::translate("createvolume", "key", 0, QApplication::UnicodeUTF8));
        label_2Hidden->setText(QApplication::translate("createvolume", "repeat key", 0, QApplication::UnicodeUTF8));
        pbHiddenKeyFile->setText(QString());
        label->setText(QApplication::translate("createvolume", "volume size", 0, QApplication::UnicodeUTF8));
        comboBoxHiddenSize->clear();
        comboBoxHiddenSize->insertItems(0, QStringList()
         << QApplication::translate("createvolume", "MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("createvolume", "KB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("createvolume", "GB", 0, QApplication::UnicodeUTF8)
        );
        cbHiddenVolume->clear();
        cbHiddenVolume->insertItems(0, QStringList()
         << QApplication::translate("createvolume", "key", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("createvolume", "keyfile", 0, QApplication::UnicodeUTF8)
        );
        labelvolumeOptions->setText(QApplication::translate("createvolume", "volume options", 0, QApplication::UnicodeUTF8));
        labelfs->setText(QApplication::translate("createvolume", "file system", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelrng->setToolTip(QApplication::translate("createvolume", "random number generator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelrng->setText(QApplication::translate("createvolume", "rng", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class createvolume: public Ui_createvolume {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEVOLUME_H

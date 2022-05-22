/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QCheckBox *voiceCheck;
    QLineEdit *codeEdit;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *guidComboBox;
    QPushButton *codeButton;
    QCheckBox *c0Edit;
    QCheckBox *c1Edit;
    QCheckBox *c2Edit;
    QCheckBox *c3Edit;
    QCheckBox *c4Edit;
    QCheckBox *c5Edit;
    QCheckBox *c6Edit;
    QCheckBox *c7Edit;
    QFrame *line;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(328, 526);
        voiceCheck = new QCheckBox(Dialog);
        voiceCheck->setObjectName(QStringLiteral("voiceCheck"));
        voiceCheck->setGeometry(QRect(20, 110, 131, 17));
        voiceCheck->setChecked(true);
        codeEdit = new QLineEdit(Dialog);
        codeEdit->setObjectName(QStringLiteral("codeEdit"));
        codeEdit->setGeometry(QRect(80, 28, 121, 20));
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 480, 311, 31));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 61, 16));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(21, 70, 61, 16));
        guidComboBox = new QComboBox(Dialog);
        guidComboBox->setObjectName(QStringLiteral("guidComboBox"));
        guidComboBox->setGeometry(QRect(80, 68, 195, 22));
        codeButton = new QPushButton(Dialog);
        codeButton->setObjectName(QStringLiteral("codeButton"));
        codeButton->setGeometry(QRect(210, 28, 101, 23));
        c0Edit = new QCheckBox(Dialog);
        c0Edit->setObjectName(QStringLiteral("c0Edit"));
        c0Edit->setGeometry(QRect(20, 170, 291, 17));
        c1Edit = new QCheckBox(Dialog);
        c1Edit->setObjectName(QStringLiteral("c1Edit"));
        c1Edit->setGeometry(QRect(20, 210, 291, 17));
        c2Edit = new QCheckBox(Dialog);
        c2Edit->setObjectName(QStringLiteral("c2Edit"));
        c2Edit->setGeometry(QRect(20, 250, 291, 17));
        c3Edit = new QCheckBox(Dialog);
        c3Edit->setObjectName(QStringLiteral("c3Edit"));
        c3Edit->setGeometry(QRect(20, 290, 291, 17));
        c4Edit = new QCheckBox(Dialog);
        c4Edit->setObjectName(QStringLiteral("c4Edit"));
        c4Edit->setGeometry(QRect(20, 330, 291, 17));
        c5Edit = new QCheckBox(Dialog);
        c5Edit->setObjectName(QStringLiteral("c5Edit"));
        c5Edit->setGeometry(QRect(20, 370, 291, 17));
        c6Edit = new QCheckBox(Dialog);
        c6Edit->setObjectName(QStringLiteral("c6Edit"));
        c6Edit->setGeometry(QRect(20, 410, 291, 17));
        c7Edit = new QCheckBox(Dialog);
        c7Edit->setObjectName(QStringLiteral("c7Edit"));
        c7Edit->setGeometry(QRect(20, 450, 291, 17));
        line = new QFrame(Dialog);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 140, 331, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Cac2X2m", 0));
        voiceCheck->setText(QApplication::translate("Dialog", "Add CSS voice", 0));
        label->setText(QApplication::translate("Dialog", "Char code:", 0));
        label_2->setText(QApplication::translate("Dialog", "Unique ID:", 0));
        guidComboBox->clear();
        guidComboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "MD5(name+race)", 0)
         << QApplication::translate("Dialog", "MD5 (name+race+Steam ID of save)", 0)
         << QApplication::translate("Dialog", "MD5(name)", 0)
         << QApplication::translate("Dialog", "Random", 0)
        );
        codeButton->setText(QApplication::translate("Dialog", "Generate random", 0));
        c0Edit->setText(QApplication::translate("Dialog", "Costume", 0));
        c1Edit->setText(QApplication::translate("Dialog", "Costume", 0));
        c2Edit->setText(QApplication::translate("Dialog", "Costume", 0));
        c3Edit->setText(QApplication::translate("Dialog", "Costume", 0));
        c4Edit->setText(QApplication::translate("Dialog", "Costume", 0));
        c5Edit->setText(QApplication::translate("Dialog", "Costume", 0));
        c6Edit->setText(QApplication::translate("Dialog", "Costume", 0));
        c7Edit->setText(QApplication::translate("Dialog", "Costume", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

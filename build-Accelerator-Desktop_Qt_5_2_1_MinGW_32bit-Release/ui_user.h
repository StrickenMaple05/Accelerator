/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QLabel *bg;
    QLabel *common;
    QWidget *layoutWidget;
    QFormLayout *avg_speed;
    QLabel *as;
    QLabel *as_value;
    QWidget *layoutWidget_2;
    QFormLayout *typed_symbols;
    QLabel *ts;
    QLabel *ts_value;
    QWidget *layoutWidget_3;
    QFormLayout *max_speed;
    QLabel *ms;
    QLabel *ms_value;
    QWidget *layoutWidget_4;
    QFormLayout *mistakes_percent;
    QLabel *mp;
    QLabel *mp_value;

    void setupUi(QDialog *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QStringLiteral("User"));
        User->setEnabled(true);
        User->resize(542, 542);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/pic/Autorization/avatar.ico"), QSize(), QIcon::Normal, QIcon::Off);
        User->setWindowIcon(icon);
        User->setAutoFillBackground(false);
        User->setStyleSheet(QStringLiteral("border: 3px solid #33a5cd;"));
        bg = new QLabel(User);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setGeometry(QRect(0, 0, 542, 542));
        bg->setStyleSheet(QStringLiteral("border: 3px solid #000000;"));
        bg->setPixmap(QPixmap(QString::fromUtf8(":/img/pic/MainWindow/bg.jpg")));
        common = new QLabel(User);
        common->setObjectName(QStringLiteral("common"));
        common->setGeometry(QRect(20, 30, 500, 18));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        common->setFont(font);
        common->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));
        layoutWidget = new QWidget(User);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 174, 499, 47));
        avg_speed = new QFormLayout(layoutWidget);
        avg_speed->setObjectName(QStringLiteral("avg_speed"));
        avg_speed->setContentsMargins(0, 0, 0, 0);
        as = new QLabel(layoutWidget);
        as->setObjectName(QStringLiteral("as"));
        as->setFont(font);
        as->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        avg_speed->setWidget(0, QFormLayout::LabelRole, as);

        as_value = new QLabel(layoutWidget);
        as_value->setObjectName(QStringLiteral("as_value"));
        as_value->setFont(font);
        as_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        avg_speed->setWidget(0, QFormLayout::FieldRole, as_value);

        layoutWidget_2 = new QWidget(User);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 66, 499, 47));
        typed_symbols = new QFormLayout(layoutWidget_2);
        typed_symbols->setObjectName(QStringLiteral("typed_symbols"));
        typed_symbols->setContentsMargins(0, 0, 0, 0);
        ts = new QLabel(layoutWidget_2);
        ts->setObjectName(QStringLiteral("ts"));
        ts->setFont(font);
        ts->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        typed_symbols->setWidget(0, QFormLayout::LabelRole, ts);

        ts_value = new QLabel(layoutWidget_2);
        ts_value->setObjectName(QStringLiteral("ts_value"));
        ts_value->setFont(font);
        ts_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        typed_symbols->setWidget(0, QFormLayout::FieldRole, ts_value);

        layoutWidget_3 = new QWidget(User);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 120, 499, 47));
        max_speed = new QFormLayout(layoutWidget_3);
        max_speed->setObjectName(QStringLiteral("max_speed"));
        max_speed->setContentsMargins(0, 0, 0, 0);
        ms = new QLabel(layoutWidget_3);
        ms->setObjectName(QStringLiteral("ms"));
        ms->setFont(font);
        ms->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        max_speed->setWidget(0, QFormLayout::LabelRole, ms);

        ms_value = new QLabel(layoutWidget_3);
        ms_value->setObjectName(QStringLiteral("ms_value"));
        ms_value->setFont(font);
        ms_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        max_speed->setWidget(0, QFormLayout::FieldRole, ms_value);

        layoutWidget_4 = new QWidget(User);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 228, 499, 47));
        mistakes_percent = new QFormLayout(layoutWidget_4);
        mistakes_percent->setObjectName(QStringLiteral("mistakes_percent"));
        mistakes_percent->setContentsMargins(0, 0, 0, 0);
        mp = new QLabel(layoutWidget_4);
        mp->setObjectName(QStringLiteral("mp"));
        mp->setFont(font);
        mp->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        mistakes_percent->setWidget(0, QFormLayout::LabelRole, mp);

        mp_value = new QLabel(layoutWidget_4);
        mp_value->setObjectName(QStringLiteral("mp_value"));
        mp_value->setFont(font);
        mp_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        mistakes_percent->setWidget(0, QFormLayout::FieldRole, mp_value);


        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QDialog *User)
    {
        User->setWindowTitle(QApplication::translate("User", "Dialog", 0));
        bg->setText(QString());
        common->setText(QApplication::translate("User", "\320\236\320\261\321\211\320\265\320\265:", 0));
        as->setText(QApplication::translate("User", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214:", 0));
        as_value->setText(QString());
        ts->setText(QApplication::translate("User", "\320\235\320\260\320\277\320\265\321\207\320\260\321\202\320\260\320\275\320\276 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262:", 0));
        ts_value->setText(QString());
        ms->setText(QApplication::translate("User", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214:", 0));
        ms_value->setText(QString());
        mp->setText(QApplication::translate("User", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \320\277\321\200\320\276\321\206\320\265\320\275\321\202 \320\276\321\210\320\270\320\261\320\276\320\272:", 0));
        mp_value->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H

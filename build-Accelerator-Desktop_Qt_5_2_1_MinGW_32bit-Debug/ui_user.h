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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QLabel *bg;
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Common;
    QLabel *common;
    QFormLayout *typed_symbols;
    QLabel *ts_value;
    QLabel *ts;
    QFormLayout *typed_texts;
    QLabel *tt;
    QLabel *tt_value;
    QFormLayout *used_texts;
    QLabel *ut_value;
    QLabel *ut;
    QFormLayout *max_speed;
    QLabel *ms;
    QLabel *ms_value;
    QFormLayout *avg_speed;
    QLabel *as;
    QLabel *as_value;
    QFormLayout *avg_mistakes_percent;
    QLabel *amp;
    QLabel *amp_value;
    QFormLayout *reg_date;
    QLabel *rd;
    QLabel *rd_value;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *Tutorial;
    QLabel *tutorial;
    QFormLayout *passed_subjects;
    QLabel *ps_value;
    QLabel *ps;
    QFormLayout *tutorial_progress;
    QLabel *tp;
    QLabel *tp_value;
    QFormLayout *avg_rank;
    QLabel *ar;
    QLabel *ar_value;
    QFormLayout *mistakes_percent;
    QLabel *mp;
    QLabel *mp_value;
    QFormLayout *studying_time;
    QLabel *st;
    QLabel *st_value;
    QPushButton *edit_data;
    QPushButton *close;
    QPushButton *log_out;

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
        widget = new QWidget(User);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, -1, 541, 541));
        widget->setStyleSheet(QStringLiteral("border: 0px;"));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 520, 212));
        Common = new QVBoxLayout(verticalLayoutWidget);
        Common->setObjectName(QStringLiteral("Common"));
        Common->setContentsMargins(0, 0, 0, 0);
        common = new QLabel(verticalLayoutWidget);
        common->setObjectName(QStringLiteral("common"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        common->setFont(font);
        common->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));
        common->setAlignment(Qt::AlignCenter);

        Common->addWidget(common);

        typed_symbols = new QFormLayout();
        typed_symbols->setObjectName(QStringLiteral("typed_symbols"));
        typed_symbols->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        ts_value = new QLabel(verticalLayoutWidget);
        ts_value->setObjectName(QStringLiteral("ts_value"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        ts_value->setFont(font1);
        ts_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        typed_symbols->setWidget(0, QFormLayout::FieldRole, ts_value);

        ts = new QLabel(verticalLayoutWidget);
        ts->setObjectName(QStringLiteral("ts"));
        ts->setFont(font1);
        ts->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        typed_symbols->setWidget(0, QFormLayout::LabelRole, ts);


        Common->addLayout(typed_symbols);

        typed_texts = new QFormLayout();
        typed_texts->setObjectName(QStringLiteral("typed_texts"));
        tt = new QLabel(verticalLayoutWidget);
        tt->setObjectName(QStringLiteral("tt"));
        tt->setFont(font1);
        tt->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        typed_texts->setWidget(0, QFormLayout::LabelRole, tt);

        tt_value = new QLabel(verticalLayoutWidget);
        tt_value->setObjectName(QStringLiteral("tt_value"));
        tt_value->setFont(font1);
        tt_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        typed_texts->setWidget(0, QFormLayout::FieldRole, tt_value);


        Common->addLayout(typed_texts);

        used_texts = new QFormLayout();
        used_texts->setObjectName(QStringLiteral("used_texts"));
        used_texts->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        ut_value = new QLabel(verticalLayoutWidget);
        ut_value->setObjectName(QStringLiteral("ut_value"));
        ut_value->setFont(font1);
        ut_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        used_texts->setWidget(0, QFormLayout::FieldRole, ut_value);

        ut = new QLabel(verticalLayoutWidget);
        ut->setObjectName(QStringLiteral("ut"));
        ut->setFont(font1);
        ut->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        used_texts->setWidget(0, QFormLayout::LabelRole, ut);


        Common->addLayout(used_texts);

        max_speed = new QFormLayout();
        max_speed->setObjectName(QStringLiteral("max_speed"));
        max_speed->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        ms = new QLabel(verticalLayoutWidget);
        ms->setObjectName(QStringLiteral("ms"));
        ms->setFont(font1);
        ms->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        max_speed->setWidget(0, QFormLayout::LabelRole, ms);

        ms_value = new QLabel(verticalLayoutWidget);
        ms_value->setObjectName(QStringLiteral("ms_value"));
        ms_value->setFont(font1);
        ms_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        max_speed->setWidget(0, QFormLayout::FieldRole, ms_value);


        Common->addLayout(max_speed);

        avg_speed = new QFormLayout();
        avg_speed->setObjectName(QStringLiteral("avg_speed"));
        as = new QLabel(verticalLayoutWidget);
        as->setObjectName(QStringLiteral("as"));
        as->setFont(font1);
        as->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        avg_speed->setWidget(0, QFormLayout::LabelRole, as);

        as_value = new QLabel(verticalLayoutWidget);
        as_value->setObjectName(QStringLiteral("as_value"));
        as_value->setFont(font1);
        as_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        avg_speed->setWidget(0, QFormLayout::FieldRole, as_value);


        Common->addLayout(avg_speed);

        avg_mistakes_percent = new QFormLayout();
        avg_mistakes_percent->setObjectName(QStringLiteral("avg_mistakes_percent"));
        avg_mistakes_percent->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        amp = new QLabel(verticalLayoutWidget);
        amp->setObjectName(QStringLiteral("amp"));
        amp->setFont(font1);
        amp->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        avg_mistakes_percent->setWidget(0, QFormLayout::LabelRole, amp);

        amp_value = new QLabel(verticalLayoutWidget);
        amp_value->setObjectName(QStringLiteral("amp_value"));
        amp_value->setFont(font1);
        amp_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        avg_mistakes_percent->setWidget(0, QFormLayout::FieldRole, amp_value);


        Common->addLayout(avg_mistakes_percent);

        reg_date = new QFormLayout();
        reg_date->setObjectName(QStringLiteral("reg_date"));
        rd = new QLabel(verticalLayoutWidget);
        rd->setObjectName(QStringLiteral("rd"));
        rd->setFont(font1);
        rd->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        reg_date->setWidget(0, QFormLayout::LabelRole, rd);

        rd_value = new QLabel(verticalLayoutWidget);
        rd_value->setObjectName(QStringLiteral("rd_value"));
        rd_value->setFont(font1);
        rd_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        reg_date->setWidget(0, QFormLayout::FieldRole, rd_value);


        Common->addLayout(reg_date);

        verticalLayoutWidget_3 = new QWidget(widget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 230, 520, 171));
        Tutorial = new QVBoxLayout(verticalLayoutWidget_3);
        Tutorial->setObjectName(QStringLiteral("Tutorial"));
        Tutorial->setContentsMargins(0, 0, 0, 0);
        tutorial = new QLabel(verticalLayoutWidget_3);
        tutorial->setObjectName(QStringLiteral("tutorial"));
        tutorial->setFont(font);
        tutorial->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));
        tutorial->setAlignment(Qt::AlignCenter);

        Tutorial->addWidget(tutorial);

        passed_subjects = new QFormLayout();
        passed_subjects->setObjectName(QStringLiteral("passed_subjects"));
        passed_subjects->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        ps_value = new QLabel(verticalLayoutWidget_3);
        ps_value->setObjectName(QStringLiteral("ps_value"));
        ps_value->setFont(font1);
        ps_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        passed_subjects->setWidget(0, QFormLayout::FieldRole, ps_value);

        ps = new QLabel(verticalLayoutWidget_3);
        ps->setObjectName(QStringLiteral("ps"));
        ps->setFont(font1);
        ps->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        passed_subjects->setWidget(0, QFormLayout::LabelRole, ps);


        Tutorial->addLayout(passed_subjects);

        tutorial_progress = new QFormLayout();
        tutorial_progress->setObjectName(QStringLiteral("tutorial_progress"));
        tp = new QLabel(verticalLayoutWidget_3);
        tp->setObjectName(QStringLiteral("tp"));
        tp->setFont(font1);
        tp->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        tutorial_progress->setWidget(0, QFormLayout::LabelRole, tp);

        tp_value = new QLabel(verticalLayoutWidget_3);
        tp_value->setObjectName(QStringLiteral("tp_value"));
        tp_value->setFont(font1);
        tp_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        tutorial_progress->setWidget(0, QFormLayout::FieldRole, tp_value);


        Tutorial->addLayout(tutorial_progress);

        avg_rank = new QFormLayout();
        avg_rank->setObjectName(QStringLiteral("avg_rank"));
        avg_rank->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        ar = new QLabel(verticalLayoutWidget_3);
        ar->setObjectName(QStringLiteral("ar"));
        ar->setFont(font1);
        ar->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        avg_rank->setWidget(0, QFormLayout::LabelRole, ar);

        ar_value = new QLabel(verticalLayoutWidget_3);
        ar_value->setObjectName(QStringLiteral("ar_value"));
        ar_value->setFont(font1);
        ar_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        avg_rank->setWidget(0, QFormLayout::FieldRole, ar_value);


        Tutorial->addLayout(avg_rank);

        mistakes_percent = new QFormLayout();
        mistakes_percent->setObjectName(QStringLiteral("mistakes_percent"));
        mp = new QLabel(verticalLayoutWidget_3);
        mp->setObjectName(QStringLiteral("mp"));
        mp->setFont(font1);
        mp->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        mistakes_percent->setWidget(0, QFormLayout::LabelRole, mp);

        mp_value = new QLabel(verticalLayoutWidget_3);
        mp_value->setObjectName(QStringLiteral("mp_value"));
        mp_value->setFont(font1);
        mp_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        mistakes_percent->setWidget(0, QFormLayout::FieldRole, mp_value);


        Tutorial->addLayout(mistakes_percent);

        studying_time = new QFormLayout();
        studying_time->setObjectName(QStringLiteral("studying_time"));
        studying_time->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        st = new QLabel(verticalLayoutWidget_3);
        st->setObjectName(QStringLiteral("st"));
        st->setFont(font1);
        st->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        studying_time->setWidget(0, QFormLayout::LabelRole, st);

        st_value = new QLabel(verticalLayoutWidget_3);
        st_value->setObjectName(QStringLiteral("st_value"));
        st_value->setFont(font1);
        st_value->setStyleSheet(QLatin1String("color: white;\n"
"border: 0px;"));

        studying_time->setWidget(0, QFormLayout::FieldRole, st_value);


        Tutorial->addLayout(studying_time);

        edit_data = new QPushButton(widget);
        edit_data->setObjectName(QStringLiteral("edit_data"));
        edit_data->setGeometry(QRect(10, 420, 180, 28));
        QFont font2;
        font2.setFamily(QStringLiteral("Courier New"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        edit_data->setFont(font2);
        edit_data->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"     min-width: 5em;\n"
"     padding: 6px;\n"
"     border: 1px solid #404040;\n"
"     /*border-width: 2px;*/\n"
"     border-radius: 8px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #999999, stop: 1 #404040);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	 color:rgb(200,200,200);\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #404040, stop: 1 #999999);\n"
" }\n"
"\n"
"QPushButton:disabled {\n"
"	color:rgb(200,200,200);\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									  stop: 0 #555555, stop: 1 #999999);\n"
"}\n"
"\n"
" QPushButton:hover {\n"
"	 border: 1px solid #404040;\n"
"     border-width: 2px;\n"
"     border-color: green;\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276"
                        "\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"));
        close = new QPushButton(widget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(430, 490, 94, 30));
        close->setFont(font2);
        close->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"     min-width: 5em;\n"
"     padding: 6px;\n"
"     border: 1px solid #404040;\n"
"     /*border-width: 2px;*/\n"
"     border-radius: 8px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #999999, stop: 1 #404040);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	 color:rgb(200,200,200);\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #404040, stop: 1 #999999);\n"
" }\n"
"\n"
"QPushButton:disabled {\n"
"	color:rgb(200,200,200);\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									  stop: 0 #555555, stop: 1 #999999);\n"
"}\n"
"\n"
" QPushButton:hover {\n"
"	 border: 1px solid #404040;\n"
"     border-width: 2px;\n"
"     border-color: green;\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276"
                        "\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"));
        log_out = new QPushButton(widget);
        log_out->setObjectName(QStringLiteral("log_out"));
        log_out->setGeometry(QRect(340, 420, 190, 30));
        log_out->setFont(font2);
        log_out->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"     min-width: 5em;\n"
"     padding: 6px;\n"
"     border: 1px solid #404040;\n"
"     /*border-width: 2px;*/\n"
"     border-radius: 8px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #999999, stop: 1 #404040);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	 color:rgb(200,200,200);\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #404040, stop: 1 #999999);\n"
" }\n"
"\n"
"QPushButton:disabled {\n"
"	color:rgb(200,200,200);\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									  stop: 0 #555555, stop: 1 #999999);\n"
"}\n"
"\n"
" QPushButton:hover {\n"
"	 border: 1px solid #404040;\n"
"     border-width: 2px;\n"
"     border-color: green;\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276"
                        "\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"));

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QDialog *User)
    {
        User->setWindowTitle(QApplication::translate("User", "Dialog", 0));
        bg->setText(QString());
        common->setText(QApplication::translate("User", "\320\236\320\261\321\211\320\265\320\265", 0));
        ts_value->setText(QApplication::translate("User", "31223", 0));
        ts->setText(QApplication::translate("User", "\320\235\320\260\320\277\320\265\321\207\320\260\321\202\320\260\320\275\320\276 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262:", 0));
        tt->setText(QApplication::translate("User", "\320\235\320\260\320\261\321\200\320\260\320\275\320\276 \321\202\320\265\320\272\321\201\321\202\320\276\320\262:", 0));
        tt_value->setText(QApplication::translate("User", "620", 0));
        ut_value->setText(QApplication::translate("User", "26", 0));
        ut->setText(QApplication::translate("User", "\320\230\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\276 \321\202\320\265\320\272\321\201\321\202\320\276\320\262", 0));
        ms->setText(QApplication::translate("User", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214:", 0));
        ms_value->setText(QApplication::translate("User", "563", 0));
        as->setText(QApplication::translate("User", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214:", 0));
        as_value->setText(QApplication::translate("User", "485", 0));
        amp->setText(QApplication::translate("User", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \320\277\321\200\320\276\321\206\320\265\320\275\321\202 \320\276\321\210\320\270\320\261\320\276\320\272:", 0));
        amp_value->setText(QApplication::translate("User", "3%", 0));
        rd->setText(QApplication::translate("User", "\320\224\320\260\321\202\320\260 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\320\270:", 0));
        rd_value->setText(QApplication::translate("User", "23.11.2019", 0));
        tutorial->setText(QApplication::translate("User", "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265", 0));
        ps_value->setText(QApplication::translate("User", "53", 0));
        ps->setText(QApplication::translate("User", "\320\237\321\200\320\276\320\271\320\264\320\265\320\275\320\276 \321\203\321\200\320\276\320\272\320\276\320\262:", 0));
        tp->setText(QApplication::translate("User", "\320\237\321\200\320\276\320\263\321\200\320\265\321\201\321\201 \320\262 \320\272\321\203\321\200\321\201\320\265 (%):", 0));
        tp_value->setText(QApplication::translate("User", "45%", 0));
        ar->setText(QApplication::translate("User", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \321\200\320\260\320\275\320\263 \320\277\320\276 \321\203\321\200\320\276\320\272\320\260\320\274:", 0));
        ar_value->setText(QApplication::translate("User", "\320\247\320\265\320\274\320\277\320\270\320\276\320\275", 0));
        mp->setText(QApplication::translate("User", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202 \320\276\321\210\320\270\320\261\320\276\320\272:", 0));
        mp_value->setText(QApplication::translate("User", "1%", 0));
        st->setText(QApplication::translate("User", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\276\321\205\320\276\320\266\320\264\320\265\320\275\320\270\321\217 \320\272\321\203\321\200\321\201\320\260:", 0));
        st_value->setText(QApplication::translate("User", "12 \320\264\320\275\320\265\320\271", 0));
        edit_data->setText(QApplication::translate("User", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", 0));
        close->setText(QApplication::translate("User", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
        log_out->setText(QApplication::translate("User", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\277\321\200\320\276\321\204\320\270\320\273\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H

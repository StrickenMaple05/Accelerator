/********************************************************************************
** Form generated from reading UI file 'autorization.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORIZATION_H
#define UI_AUTORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Autorization
{
public:
    QGroupBox *autorization;
    QLabel *login;
    QLabel *password;
    QPushButton *enter;
    QLineEdit *login_input;
    QLineEdit *passw_input;
    QPushButton *registration;
    QLabel *home;

    void setupUi(QDialog *Autorization)
    {
        if (Autorization->objectName().isEmpty())
            Autorization->setObjectName(QStringLiteral("Autorization"));
        Autorization->resize(469, 205);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/pic/Autorization/auto_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Autorization->setWindowIcon(icon);
        autorization = new QGroupBox(Autorization);
        autorization->setObjectName(QStringLiteral("autorization"));
        autorization->setGeometry(QRect(150, 20, 300, 160));
        login = new QLabel(autorization);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(10, 20, 81, 31));
        QFont font;
        font.setFamily(QStringLiteral("Monotype Corsiva"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        login->setFont(font);
        password = new QLabel(autorization);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(10, 60, 91, 31));
        password->setFont(font);
        enter = new QPushButton(autorization);
        enter->setObjectName(QStringLiteral("enter"));
        enter->setGeometry(QRect(10, 110, 110, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Courier New"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        enter->setFont(font1);
        enter->setAutoFillBackground(false);
        enter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        login_input = new QLineEdit(autorization);
        login_input->setObjectName(QStringLiteral("login_input"));
        login_input->setGeometry(QRect(100, 20, 190, 30));
        QFont font2;
        font2.setFamily(QStringLiteral("Bahnschrift"));
        font2.setPointSize(11);
        login_input->setFont(font2);
        login_input->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"border: 1px solid grey;"));
        passw_input = new QLineEdit(autorization);
        passw_input->setObjectName(QStringLiteral("passw_input"));
        passw_input->setGeometry(QRect(100, 60, 190, 30));
        passw_input->setFont(font2);
        passw_input->setFocusPolicy(Qt::StrongFocus);
        passw_input->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"border: 1px solid grey;"));
        passw_input->setEchoMode(QLineEdit::Password);
        registration = new QPushButton(autorization);
        registration->setObjectName(QStringLiteral("registration"));
        registration->setGeometry(QRect(130, 110, 160, 30));
        registration->setFont(font1);
        registration->setAutoFillBackground(false);
        registration->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        home = new QLabel(Autorization);
        home->setObjectName(QStringLiteral("home"));
        home->setGeometry(QRect(10, 30, 128, 128));
        home->setPixmap(QPixmap(QString::fromUtf8("pic/Autorization/home.png")));

        retranslateUi(Autorization);

        QMetaObject::connectSlotsByName(Autorization);
    } // setupUi

    void retranslateUi(QDialog *Autorization)
    {
        Autorization->setWindowTitle(QApplication::translate("Autorization", "Autorization", 0));
        autorization->setTitle(QApplication::translate("Autorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", 0));
        login->setText(QApplication::translate("Autorization", "\320\233\320\276\320\263\320\270\320\275:", 0));
        password->setText(QApplication::translate("Autorization", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0));
        enter->setText(QApplication::translate("Autorization", "\320\222\320\276\320\271\321\202\320\270", 0));
        registration->setText(QApplication::translate("Autorization", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", 0));
        home->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Autorization: public Ui_Autorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORIZATION_H

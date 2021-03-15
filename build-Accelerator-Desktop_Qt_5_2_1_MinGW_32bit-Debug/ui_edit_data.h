/********************************************************************************
** Form generated from reading UI file 'edit_data.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_DATA_H
#define UI_EDIT_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Edit_data
{
public:
    QLabel *login;
    QLabel *old_pass;
    QLineEdit *login_input;
    QLineEdit *old_passw_input;
    QLineEdit *new_pass_input;
    QLineEdit *confirm_pass_input;
    QLabel *new_pass;
    QLabel *confirm_pass;
    QLabel *bg;
    QPushButton *done;
    QPushButton *cancel;

    void setupUi(QDialog *Edit_data)
    {
        if (Edit_data->objectName().isEmpty())
            Edit_data->setObjectName(QStringLiteral("Edit_data"));
        Edit_data->resize(400, 240);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/pic/Autorization/auto_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Edit_data->setWindowIcon(icon);
        login = new QLabel(Edit_data);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(20, 20, 81, 31));
        QFont font;
        font.setFamily(QStringLiteral("Monotype Corsiva"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        login->setFont(font);
        login->setStyleSheet(QStringLiteral("color: white;"));
        old_pass = new QLabel(Edit_data);
        old_pass->setObjectName(QStringLiteral("old_pass"));
        old_pass->setGeometry(QRect(20, 60, 161, 31));
        old_pass->setFont(font);
        old_pass->setStyleSheet(QStringLiteral("color: white;"));
        login_input = new QLineEdit(Edit_data);
        login_input->setObjectName(QStringLiteral("login_input"));
        login_input->setGeometry(QRect(190, 20, 190, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Bahnschrift"));
        font1.setPointSize(11);
        login_input->setFont(font1);
        login_input->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"border: 1px solid grey;\n"
"color: black;"));
        old_passw_input = new QLineEdit(Edit_data);
        old_passw_input->setObjectName(QStringLiteral("old_passw_input"));
        old_passw_input->setGeometry(QRect(190, 60, 190, 30));
        old_passw_input->setFont(font1);
        old_passw_input->setFocusPolicy(Qt::StrongFocus);
        old_passw_input->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"border: 1px solid grey;\n"
"color: black;"));
        old_passw_input->setEchoMode(QLineEdit::Password);
        new_pass_input = new QLineEdit(Edit_data);
        new_pass_input->setObjectName(QStringLiteral("new_pass_input"));
        new_pass_input->setGeometry(QRect(190, 100, 190, 30));
        new_pass_input->setFont(font1);
        new_pass_input->setFocusPolicy(Qt::StrongFocus);
        new_pass_input->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"border: 1px solid grey;\n"
"color: black;"));
        new_pass_input->setEchoMode(QLineEdit::Password);
        confirm_pass_input = new QLineEdit(Edit_data);
        confirm_pass_input->setObjectName(QStringLiteral("confirm_pass_input"));
        confirm_pass_input->setGeometry(QRect(190, 140, 190, 30));
        confirm_pass_input->setFont(font1);
        confirm_pass_input->setFocusPolicy(Qt::StrongFocus);
        confirm_pass_input->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"border: 1px solid grey;\n"
"color: black;"));
        confirm_pass_input->setEchoMode(QLineEdit::Password);
        new_pass = new QLabel(Edit_data);
        new_pass->setObjectName(QStringLiteral("new_pass"));
        new_pass->setGeometry(QRect(20, 100, 161, 31));
        new_pass->setFont(font);
        new_pass->setStyleSheet(QStringLiteral("color: white;"));
        confirm_pass = new QLabel(Edit_data);
        confirm_pass->setObjectName(QStringLiteral("confirm_pass"));
        confirm_pass->setGeometry(QRect(20, 140, 161, 31));
        confirm_pass->setFont(font);
        confirm_pass->setStyleSheet(QStringLiteral("color: white;"));
        bg = new QLabel(Edit_data);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setGeometry(QRect(0, 0, 400, 240));
        bg->setPixmap(QPixmap(QString::fromUtf8(":/img/pic/MainWindow/bg.jpg")));
        done = new QPushButton(Edit_data);
        done->setObjectName(QStringLiteral("done"));
        done->setGeometry(QRect(147, 190, 111, 29));
        QFont font2;
        font2.setFamily(QStringLiteral("Courier New"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        done->setFont(font2);
        done->setAutoFillBackground(false);
        done->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        cancel = new QPushButton(Edit_data);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(270, 190, 110, 29));
        cancel->setFont(font2);
        cancel->setAutoFillBackground(false);
        cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        bg->raise();
        done->raise();
        login->raise();
        old_pass->raise();
        cancel->raise();
        login_input->raise();
        old_passw_input->raise();
        new_pass_input->raise();
        confirm_pass_input->raise();
        new_pass->raise();
        confirm_pass->raise();
        done->raise();
        cancel->raise();

        retranslateUi(Edit_data);

        QMetaObject::connectSlotsByName(Edit_data);
    } // setupUi

    void retranslateUi(QDialog *Edit_data)
    {
        Edit_data->setWindowTitle(QApplication::translate("Edit_data", "\320\224\320\260\320\275\320\275\321\213\320\265", 0));
        login->setText(QApplication::translate("Edit_data", "\320\233\320\276\320\263\320\270\320\275:", 0));
        old_pass->setText(QApplication::translate("Edit_data", "\320\241\321\202\320\260\321\200\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214:", 0));
        new_pass->setText(QApplication::translate("Edit_data", "\320\235\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214:", 0));
        confirm_pass->setText(QApplication::translate("Edit_data", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265:", 0));
        bg->setText(QString());
        done->setText(QApplication::translate("Edit_data", "\320\223\320\276\321\202\320\276\320\262\320\276", 0));
        cancel->setText(QApplication::translate("Edit_data", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Edit_data: public Ui_Edit_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_DATA_H

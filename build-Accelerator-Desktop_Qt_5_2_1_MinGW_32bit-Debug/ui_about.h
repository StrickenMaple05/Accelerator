/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *text;
    QLabel *bg;
    QPushButton *close;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(385, 295);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/pic/MainWindow/about.ico"), QSize(), QIcon::Normal, QIcon::Off);
        About->setWindowIcon(icon);
        text = new QLabel(About);
        text->setObjectName(QStringLiteral("text"));
        text->setGeometry(QRect(10, 10, 370, 251));
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        text->setFont(font);
        text->setLayoutDirection(Qt::LeftToRight);
        text->setStyleSheet(QStringLiteral("color: white;"));
        text->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        bg = new QLabel(About);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setGeometry(QRect(0, 0, 385, 295));
        bg->setPixmap(QPixmap(QString::fromUtf8(":/img/pic/MainWindow/bg.jpg")));
        close = new QPushButton(About);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(270, 250, 96, 28));
        QFont font1;
        font1.setFamily(QStringLiteral("Courier New"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        close->setFont(font1);
        close->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"     min-width: 5em;\n"
"     padding: 6px;\n"
"     border: 1px solid #404040;\n"
"     border-width: 2px;\n"
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
"     border-color: green;\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276"
                        "\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"));
        bg->raise();
        text->raise();
        close->raise();

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        text->setText(QApplication::translate("About", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \"Accelerator\", \320\262\320\265\321\200\321\201\320\270\321\217 1.0.\n"
"\320\220\320\262\321\202\320\276\321\200\321\201\320\272\320\270\320\265 \320\277\321\200\320\260\320\262\320\260 \320\275\320\265 \320\267\320\260\321\211\320\270\321\211\320\265\320\275\321\213.\n"
"\320\241\321\200\320\265\320\264\320\260 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\272\320\270: Qt Creator, \321\217\320\267\321\213\320\272 C++\n"
"\320\237\320\276\320\273\320\275\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 \320\277\321\200\320\276\320\265\320\272\321\202\320\260: 2 \320\275\320\265\320\264\320\265\320\273\320\270\n"
"\n"
"\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\277\321\200\320\265\320\264\320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\260 \320\264\320\273\321\217 \320\276"
                        "\321\201\320\262\320\276\320\265\320\275\320\270\321\217 \320\270 \321\200\320\260\320\267-\n"
"\320\262\320\270\321\202\320\270\321\217 \320\275\320\260\320\262\321\213\320\272\320\260 \321\201\320\273\320\265\320\277\320\276\320\263\320\276 \320\274\320\265\321\202\320\276\320\264\320\260 \320\277\320\265\321\207\320\260\321\202\320\270. \320\222 \320\272\320\276\320\275\321\206\320\265\n"
"\320\272\320\260\320\266\320\264\320\276\320\271 \320\263\320\273\320\260\320\262\321\213 \320\265\321\201\321\202\321\214 \320\270\321\202\320\276\320\263\320\276\320\262\321\213\320\271 \321\203\321\200\320\276\320\272, \320\277\321\200\320\276\321\205\320\276\320\266\320\264\320\265-\n"
"\320\275\320\270\320\265 \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \320\267\320\260\320\272\321\200\320\265\320\277\320\273\321\217\320\265\321\202 \320\270\320\267\321\203\321\207\320\265\320\275\320\275\320\276\320\265.\n"
"\n"
"\320\235\320\260\321\201\321\202\320\276\321\217\321\202\320\265\320\273\321\214\320"
                        "\275\320\276 \321\200\320\265\320\272\320\276\320\274\320\265\320\275\320\264\321\203\320\265\321\202\321\201\321\217 \320\277\321\200\320\276\321\205\320\276\320\264\320\270\321\202\321\214 \321\203\321\200\320\276-\n"
"\320\272\320\270 \321\201 \320\274\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\274 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276\320\274 \320\276\321\210\320\270\320\261\320\276\320\272 \320\270 \320\275\320\265\n"
"\321\205\320\260\320\273\321\202\321\203\321\200\320\270\321\202\321\214!", 0));
        bg->setText(QString());
        close->setText(QApplication::translate("About", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H

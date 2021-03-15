/********************************************************************************
** Form generated from reading UI file 'accelerator.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCELERATOR_H
#define UI_ACCELERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Accelerator
{
public:
    QWidget *centralWidget;
    QLabel *Text;
    QLineEdit *Input;
    QLabel *background;
    QColumnView *text_background;
    QLabel *keyboard;
    QLabel *bg;
    QWidget *layoutWidget;
    QHBoxLayout *buttons;
    QPushButton *tutorial;
    QPushButton *texts;
    QPushButton *RandomText;
    QPushButton *About;
    QPushButton *Quit;
    QPushButton *Autorization;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Accelerator)
    {
        if (Accelerator->objectName().isEmpty())
            Accelerator->setObjectName(QStringLiteral("Accelerator"));
        Accelerator->resize(1130, 700);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/pic/MainWindow/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Accelerator->setWindowIcon(icon);
        Accelerator->setAutoFillBackground(false);
        Accelerator->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(Accelerator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Text = new QLabel(centralWidget);
        Text->setObjectName(QStringLiteral("Text"));
        Text->setGeometry(QRect(260, 180, 580, 51));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(17);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        Text->setFont(font);
        Text->setFrameShape(QFrame::NoFrame);
        Text->setFrameShadow(QFrame::Plain);
        Text->setTextFormat(Qt::AutoText);
        Text->setScaledContents(false);
        Text->setWordWrap(false);
        Text->setOpenExternalLinks(false);
        Input = new QLineEdit(centralWidget);
        Input->setObjectName(QStringLiteral("Input"));
        Input->setEnabled(true);
        Input->setGeometry(QRect(250, 270, 600, 60));
        Input->setFont(font);
        Input->setFocusPolicy(Qt::ClickFocus);
        Input->setStyleSheet(QLatin1String("QLineEdit {\n"
"background-color: white;\n"
"	border: 1px solid;\n"
"     border-width: 2px;\n"
"     border-radius: 12px;\n"
"     border-color: grey;\n"
"     min-width: 10em;\n"
"     padding: 6px;\n"
"}"));
        background = new QLabel(centralWidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(209, 140, 681, 430));
        background->setStyleSheet(QLatin1String("background-color: black;\n"
"     border-width: 2px;\n"
"     border-radius: 20px;\n"
"     border-color: beige;\n"
"     font: bold 14px;\n"
"     min-width: 10em;\n"
"     padding: 6px;"));
        background->setPixmap(QPixmap(QString::fromUtf8(":/img/pic/MainWindow/background.jpg")));
        text_background = new QColumnView(centralWidget);
        text_background->setObjectName(QStringLiteral("text_background"));
        text_background->setEnabled(true);
        text_background->setGeometry(QRect(250, 170, 600, 70));
        text_background->setMouseTracking(false);
        text_background->setLayoutDirection(Qt::LeftToRight);
        text_background->setAutoFillBackground(false);
        text_background->setStyleSheet(QLatin1String("background-color: rgb(240,240,240);\n"
"	border style: outset;\n"
"     border: 3px solid green;\n"
"     border-width: 3px;\n"
"     border-radius: 15px;\n"
"     min-width: 10em;\n"
"     padding: 6px;\n"
"r"));
        text_background->setFrameShape(QFrame::StyledPanel);
        keyboard = new QLabel(centralWidget);
        keyboard->setObjectName(QStringLiteral("keyboard"));
        keyboard->setGeometry(QRect(230, 360, 638, 190));
        keyboard->setPixmap(QPixmap(QString::fromUtf8(":/kb/pic/Keyboard/keyboard.png")));
        bg = new QLabel(centralWidget);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setEnabled(true);
        bg->setGeometry(QRect(0, 0, 1130, 750));
        bg->setPixmap(QPixmap(QString::fromUtf8(":/img/pic/MainWindow/bg.jpg")));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 40, 980, 40));
        buttons = new QHBoxLayout(layoutWidget);
        buttons->setSpacing(6);
        buttons->setContentsMargins(11, 11, 11, 11);
        buttons->setObjectName(QStringLiteral("buttons"));
        buttons->setContentsMargins(0, 0, 0, 0);
        tutorial = new QPushButton(layoutWidget);
        tutorial->setObjectName(QStringLiteral("tutorial"));
        tutorial->setEnabled(false);
        QFont font1;
        font1.setFamily(QStringLiteral("Courier New"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        tutorial->setFont(font1);
        tutorial->setMouseTracking(false);
        tutorial->setToolTipDuration(4000);
        tutorial->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        buttons->addWidget(tutorial);

        texts = new QPushButton(layoutWidget);
        texts->setObjectName(QStringLiteral("texts"));
        texts->setEnabled(false);
        texts->setFont(font1);
        texts->setToolTipDuration(4000);
        texts->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        buttons->addWidget(texts);

        RandomText = new QPushButton(layoutWidget);
        RandomText->setObjectName(QStringLiteral("RandomText"));
        RandomText->setFont(font1);
        RandomText->setToolTipDuration(4000);
        RandomText->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        buttons->addWidget(RandomText);

        About = new QPushButton(layoutWidget);
        About->setObjectName(QStringLiteral("About"));
        About->setFont(font1);
        About->setToolTipDuration(4000);
        About->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        buttons->addWidget(About);

        Quit = new QPushButton(layoutWidget);
        Quit->setObjectName(QStringLiteral("Quit"));
        Quit->setFont(font1);
        Quit->setToolTipDuration(4000);
        Quit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        buttons->addWidget(Quit);

        Quit->raise();
        About->raise();
        RandomText->raise();
        tutorial->raise();
        texts->raise();
        Autorization = new QPushButton(centralWidget);
        Autorization->setObjectName(QStringLiteral("Autorization"));
        Autorization->setEnabled(true);
        Autorization->setGeometry(QRect(40, 40, 40, 40));
        Autorization->setFont(font1);
        Autorization->setToolTipDuration(4000);
        Autorization->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
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
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260"
                        "\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/pic/Autorization/avatar.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Autorization->setIcon(icon1);
        Autorization->setIconSize(QSize(25, 25));
        Autorization->setFlat(false);
        Accelerator->setCentralWidget(centralWidget);
        bg->raise();
        background->raise();
        text_background->raise();
        keyboard->raise();
        layoutWidget->raise();
        Input->raise();
        Text->raise();
        Autorization->raise();
        menuBar = new QMenuBar(Accelerator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1130, 26));
        Accelerator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Accelerator);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setStyleSheet(QStringLiteral("background-color: black;"));
        Accelerator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Accelerator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setStyleSheet(QStringLiteral("     background-color: black;"));
        Accelerator->setStatusBar(statusBar);

        retranslateUi(Accelerator);

        QMetaObject::connectSlotsByName(Accelerator);
    } // setupUi

    void retranslateUi(QMainWindow *Accelerator)
    {
        Accelerator->setWindowTitle(QApplication::translate("Accelerator", "Accelerator", 0));
        Text->setText(QApplication::translate("Accelerator", "\320\236\321\202 \321\202\320\276\320\277\320\276\321\202\320\260 \320\272\320\276\320\277\321\213\321\202 \320\277\321\213\320\273\321\214 \320\277\320\276 \320\277\320\276\320\273\321\216 \320\273\320\265\321\202\320\270\321\202.", 0));
        background->setText(QString());
        keyboard->setText(QString());
        bg->setText(QString());
#ifndef QT_NO_TOOLTIP
        tutorial->setToolTip(QApplication::translate("Accelerator", "<html><head/><body><p>\320\236\320\261\321\203\321\207\320\260\321\216\321\211\320\270\320\271 \320\272\321\203\321\200\321\201 \321\201\320\273\320\265\320\277\320\276\320\271 \320\277\320\265\321\207\320\260\321\202\320\270 (\320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\262\320\276\320\271\321\202\320\270)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        tutorial->setText(QApplication::translate("Accelerator", "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265", 0));
#ifndef QT_NO_TOOLTIP
        texts->setToolTip(QApplication::translate("Accelerator", "<html><head/><body><p>\320\242\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\260 \320\277\320\265\321\207\320\260\321\202\320\270 \320\275\320\260 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214\321\201\320\272\320\270\321\205 \321\202\320\265\320\272\321\201\321\202\320\260\321\205 (\320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\262\320\276\320\271\321\202\320\270)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        texts->setText(QApplication::translate("Accelerator", "\320\241\320\273\320\276\320\262\320\260\321\200\320\270", 0));
#ifndef QT_NO_TOOLTIP
        RandomText->setToolTip(QApplication::translate("Accelerator", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\265 \321\202\320\265\320\272\321\201\321\202\321\213 \320\264\320\273\321\217 \320\270\320\275\321\202\320\265\321\200\320\260\320\272\321\202\320\270\320\262\320\275\320\276\320\263\320\276 \320\262\320\262\320\276\320\264\320\260", 0));
#endif // QT_NO_TOOLTIP
        RandomText->setText(QApplication::translate("Accelerator", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202", 0));
#ifndef QT_NO_TOOLTIP
        About->setToolTip(QApplication::translate("Accelerator", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265 \"Accelerator\"", 0));
#endif // QT_NO_TOOLTIP
        About->setText(QApplication::translate("Accelerator", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
#ifndef QT_NO_TOOLTIP
        Quit->setToolTip(QApplication::translate("Accelerator", "\320\222\321\213\321\205\320\276\320\264 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Quit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Quit->setText(QApplication::translate("Accelerator", "\320\222\321\213\321\205\320\276\320\264", 0));
#ifndef QT_NO_TOOLTIP
        Autorization->setToolTip(QApplication::translate("Accelerator", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", 0));
#endif // QT_NO_TOOLTIP
        Autorization->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Accelerator: public Ui_Accelerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCELERATOR_H

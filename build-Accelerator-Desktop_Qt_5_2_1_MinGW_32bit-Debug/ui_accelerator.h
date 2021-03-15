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
    QLabel *current_mistakes;
    QLabel *mistakes;
    QLabel *time;
    QLabel *avg_speed;
    QLabel *current_speed;
    QLabel *past_time;
    QLabel *backlight;
    QLabel *backlight_shift;
    QLabel *intro_text;
    QLabel *intro;
    QLabel *Text;
    QLabel *Text_typed;
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
        Input = new QLineEdit(centralWidget);
        Input->setObjectName(QStringLiteral("Input"));
        Input->setEnabled(true);
        Input->setGeometry(QRect(260, 270, 600, 60));
        QFont font;
        font.setFamily(QStringLiteral("Colonna MT"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
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
        background->setGeometry(QRect(219, 140, 681, 430));
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
        text_background->setGeometry(QRect(260, 170, 600, 70));
        text_background->setMouseTracking(false);
        text_background->setLayoutDirection(Qt::LeftToRight);
        text_background->setAutoFillBackground(false);
        text_background->setStyleSheet(QLatin1String("background-color: rgb(240,240,240);\n"
"	border style: outset;\n"
"     border: 3px solid green;\n"
"     border-width: 3px;\n"
"     border-radius: 15px;\n"
"     min-width: 10em;\n"
"     padding: 6px;"));
        text_background->setFrameShape(QFrame::StyledPanel);
        keyboard = new QLabel(centralWidget);
        keyboard->setObjectName(QStringLiteral("keyboard"));
        keyboard->setGeometry(QRect(240, 360, 638, 190));
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
        RandomText->setEnabled(true);
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
        current_mistakes = new QLabel(centralWidget);
        current_mistakes->setObjectName(QStringLiteral("current_mistakes"));
        current_mistakes->setGeometry(QRect(920, 220, 160, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        current_mistakes->setFont(font2);
        current_mistakes->setStyleSheet(QStringLiteral("color: green;"));
        current_mistakes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mistakes = new QLabel(centralWidget);
        mistakes->setObjectName(QStringLiteral("mistakes"));
        mistakes->setGeometry(QRect(30, 220, 170, 20));
        mistakes->setFont(font2);
        mistakes->setStyleSheet(QStringLiteral("color: green;"));
        mistakes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        time = new QLabel(centralWidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(920, 160, 170, 20));
        time->setFont(font2);
        time->setStyleSheet(QStringLiteral("color: green;"));
        time->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        avg_speed = new QLabel(centralWidget);
        avg_speed->setObjectName(QStringLiteral("avg_speed"));
        avg_speed->setGeometry(QRect(30, 190, 160, 20));
        avg_speed->setFont(font2);
        avg_speed->setStyleSheet(QStringLiteral("color: green;"));
        avg_speed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        current_speed = new QLabel(centralWidget);
        current_speed->setObjectName(QStringLiteral("current_speed"));
        current_speed->setGeometry(QRect(920, 190, 170, 20));
        current_speed->setFont(font2);
        current_speed->setStyleSheet(QStringLiteral("color: green;"));
        current_speed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        past_time = new QLabel(centralWidget);
        past_time->setObjectName(QStringLiteral("past_time"));
        past_time->setGeometry(QRect(30, 160, 170, 20));
        past_time->setFont(font2);
        past_time->setStyleSheet(QStringLiteral("color: green;"));
        past_time->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        backlight = new QLabel(centralWidget);
        backlight->setObjectName(QStringLiteral("backlight"));
        backlight->setGeometry(QRect(240, 360, 638, 190));
        backlight->setPixmap(QPixmap(QString::fromUtf8("pic/Keyboard/L_shift.png")));
        backlight_shift = new QLabel(centralWidget);
        backlight_shift->setObjectName(QStringLiteral("backlight_shift"));
        backlight_shift->setGeometry(QRect(240, 360, 638, 190));
        backlight_shift->setPixmap(QPixmap(QString::fromUtf8("pic/Keyboard/L_shift.png")));
        intro_text = new QLabel(centralWidget);
        intro_text->setObjectName(QStringLiteral("intro_text"));
        intro_text->setGeometry(QRect(0, 0, 1130, 640));
        QFont font3;
        font3.setFamily(QStringLiteral("Courier New"));
        font3.setPointSize(36);
        font3.setBold(true);
        font3.setWeight(75);
        intro_text->setFont(font3);
        intro_text->setStyleSheet(QStringLiteral("color:gold;"));
        intro_text->setAlignment(Qt::AlignCenter);
        intro = new QLabel(centralWidget);
        intro->setObjectName(QStringLiteral("intro"));
        intro->setGeometry(QRect(0, 0, 1130, 750));
        intro->setFont(font3);
        intro->setStyleSheet(QStringLiteral("color:grey;"));
        intro->setPixmap(QPixmap(QString::fromUtf8(":/img/pic/MainWindow/intro.png")));
        intro->setAlignment(Qt::AlignCenter);
        Text = new QLabel(centralWidget);
        Text->setObjectName(QStringLiteral("Text"));
        Text->setGeometry(QRect(560, 180, 291, 48));
        QFont font4;
        font4.setFamily(QStringLiteral("Tahoma"));
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        Text->setFont(font4);
        Text->setFrameShape(QFrame::NoFrame);
        Text->setFrameShadow(QFrame::Plain);
        Text->setTextFormat(Qt::AutoText);
        Text->setScaledContents(false);
        Text->setWordWrap(false);
        Text->setOpenExternalLinks(false);
        Text_typed = new QLabel(centralWidget);
        Text_typed->setObjectName(QStringLiteral("Text_typed"));
        Text_typed->setGeometry(QRect(270, 180, 286, 48));
        Text_typed->setFont(font4);
        Text_typed->setStyleSheet(QStringLiteral("color:rgb(0,200,0);"));
        Text_typed->setFrameShape(QFrame::NoFrame);
        Text_typed->setFrameShadow(QFrame::Plain);
        Text_typed->setTextFormat(Qt::AutoText);
        Text_typed->setScaledContents(false);
        Text_typed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Text_typed->setWordWrap(false);
        Text_typed->setOpenExternalLinks(false);
        Accelerator->setCentralWidget(centralWidget);
        intro->raise();
        intro_text->raise();
        bg->raise();
        background->raise();
        text_background->raise();
        keyboard->raise();
        layoutWidget->raise();
        Input->raise();
        Text->raise();
        Autorization->raise();
        current_mistakes->raise();
        mistakes->raise();
        time->raise();
        avg_speed->raise();
        current_speed->raise();
        past_time->raise();
        backlight->raise();
        backlight_shift->raise();
        Text_typed->raise();
        Text->raise();
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
        current_mistakes->setText(QApplication::translate("Accelerator", "\320\236\321\210\320\270\320\261\320\276\320\272: 0", 0));
        mistakes->setText(QApplication::translate("Accelerator", "\320\236\321\210\320\270\320\261\320\276\320\272: 0", 0));
        time->setText(QApplication::translate("Accelerator", "\320\222\321\200\320\265\320\274\321\217: 00:03:3716", 0));
        avg_speed->setText(QApplication::translate("Accelerator", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214: 250", 0));
        current_speed->setText(QApplication::translate("Accelerator", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214: 300", 0));
        past_time->setText(QApplication::translate("Accelerator", "\320\222\321\200\320\265\320\274\321\217: 00:03:3716", 0));
        backlight->setText(QString());
        backlight_shift->setText(QString());
        intro_text->setText(QApplication::translate("Accelerator", "Accelerator", 0));
        intro->setText(QString());
        Text->setText(QApplication::translate("Accelerator", "\320\235\320\265 \320\276\321\202\320\272\320\273\320\260\320\264\321\213\320\262\320\260\320\271 \320\275\320\260 \320\267\320\260\320\262\321\202\321\200\320\260 \321\202\320\276, \321\207\321\202\320\276 \320\274\320\276\320\266\320\275\320\276 \321\201\320\264\320\265\320\273\320\260\321\202\321\214 \321\201\320\265\320\263\320\276\320\264\320\275\321\217!", 0));
        Text_typed->setText(QApplication::translate("Accelerator", "\320\235\320\265 \320\276\321\202\320\272\320\273\320\260\320\264\321\213\320\262\320\260\320\271 \320\275\320\260 \320\267\320\260\320\262\321\202\321\200\320\260 \321\202\320\276, \321\207\321\202\320\276 \320\274\320\276\320\266\320\275\320\276 \321\201\320\264\320\265\320\273\320\260\321\202\321\214 \321\201\320\265\320\263\320\276\320\264\320\275\321\217!", 0));
    } // retranslateUi

};

namespace Ui {
    class Accelerator: public Ui_Accelerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCELERATOR_H

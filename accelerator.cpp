#include "accelerator.h"
#include "ui_accelerator.h"
#include "autorization.h"
#include "about.h"
#include "user.h"

#define changeText(tut,i) {if (!tut) text = mas[i]; else text = tutorial[i]; text_length = text.length(); }

QString green_border = "background-color: rgb(240,240,240); border style: outset; border: 3px solid green; border-width: 3px; border-radius: 15px; min-width: 10em; padding: 6px;";
QString red_border = "background-color: rgb(240,240,240); border style: outset; border: 3px solid red; border-width: 3px; border-radius: 15px; min-width: 10em; padding: 6px;";

extern QString login, password;

bool tut = 0;

int tutorial_number = 0;

QTimer *intro_timer = new QTimer();
QTimer *intro_text_timer = new QTimer();

QTimer *redraw_speed_timer = new QTimer();
QTimer *show_result_timer = new QTimer();
QTimer *red_border_timer = new QTimer();
QTimer *comb_time_timer = new QTimer();
QTimer *text_timer = new QTimer();

struct combination
{
    QString comb;
    int time;
};

combination comb[5];
QString curr_comb = "";

int msec = 0, msec_pred = 0;
int ms = 0, s = 0, m = 0, h = 0;
int comb_time[] = {0,0,0,0,0};

const int MAXX = 50;

QString tutorial[MAXX];

extern bool autorized;
extern QString login;
int text_length;
QString text = "";
QString mas[MAXX];
QString tim = "Время: ";
QString mis = "Ошибок: ";
QString spd = "Скорость: ";
int i = 0, k = 0, mistakes = 0;
bool SCF = 0;

void MainMenuTextDB(QSqlDatabase db)
{
    db.open();
    QSqlQuery query = QSqlQuery(db);
    query.exec("SELECT text FROM main_menu_text");
    while (query.next())
        mas[k++] = query.value(0).toString();
    if (k) changeText(0, i = rand()%k);
    db.close();
}


void TutorialText()
{
    QDir::setCurrent("E:\\Qt_5.2.1\\Projects\\Accelerator\\Tutorial\\");

    for (int i = 0; i < 17; ++i)
    {
        QString p = QString("1\\" + QString::number(i) + ".txt");
        QFile tutor(p);
        if (tutor.exists()&&tutor.open(QIODevice::ReadOnly))
        {
            tutorial[i] = QString(tutor.readLine());
            tutor.close();
        }
    }
    QDir::setCurrent("E:\\Qt_5.2.1\\Projects\\Accelerator\\");
}

void InitSlowestCombinations()
{
    for (int i = 0; i < 5; ++i)
    {
        comb[i].time = 0;
        comb[i].comb = "";
    }
}

void OutputComb()
{
    QFile combs("slowest_combinations.txt");
    if (combs.exists()&&combs.open(SCF ? QIODevice::Append : QIODevice::WriteOnly))
    {
        SCF = 1;
        for (int i = 0; i < 5; ++i)
        {
            QString str = comb[i].comb + '\t' + QString::number(2*60000/comb[i].time) + "\r\n";
            combs.write(str.toUtf8());
            //comb[i].comb = ""; comb[i].time = 0;
        }
        combs.close();
    }
}

void Accelerator::DefaultValues()
{
    curr_comb = ""; InitSlowestCombinations();
    if (text_timer->isActive())
    {
        text_timer->stop(); msec = 0; msec_pred = 0; mistakes = 0;
        ui->time->setText(tim + "00:00");
    }
    if (redraw_speed_timer->isActive())
        redraw_speed_timer->stop();

    SelectBacklight(text[0]);
    ui->Input->setText("");
    ui->current_mistakes->setText(mis + "0");
    ui->current_speed->setText(spd + "0");
}

void Accelerator::SelectBacklight(QChar c)
{
    bool shift = 0;
    QChar q = c;
    if (q == '!'){shift = 1; q = '1';}
    if (q == '"'){shift = 1; q = '2';}
    if (q == 185){shift = 1; q = '3';}
    if (q == '$'){shift = 1; q = '4';}
    if (q == '%'){shift = 1; q = '5';}
    if (q == ':'){shift = 1; q = '6';}
    if (q == '?'){shift = 1; q = '7';}
    if (q == '*'){shift = 1; q = '8';}
    if (q == '('){shift = 1; q = '9';}
    if (q == ')'){shift = 1; q = '0';}
    if (q == '_'){shift = 1; q = '-';}
    if (q == '+'){shift = 1; q = '=';}
    if (q == ','){shift = 1; q = '.';}
    if (q == '\\'){shift = 1; q = 'T';}
    if (q == ' '){q = 'P';}

    if ((q>='z' + 70)&&(q<='z'+101))
    {
        shift = 1; q.toLower();
    }

    QString symbol = "pic\\keyboard\\";
    symbol += q;
    symbol += ".png";
    ui->backlight_shift->setPixmap(QPixmap(shift ? ":/kb/pic/Keyboard/shift.png" : ""));
    ui->backlight->setPixmap(symbol);
}

void Accelerator::IntroTextTimer()
{
    ui->intro_text->lower();
    intro_text_timer->stop();
}

void Accelerator::IntroTimer()
{
    if (!intro_text_timer->isActive())
    {
        ui->intro_text->raise();
        intro_text_timer = new QTimer(this);
        connect(intro_text_timer,SIGNAL(timeout()),this,SLOT(IntroTextTimer()));
        intro_text_timer->start(1500);
    }
    else
    {
        ui->intro->lower();
        intro_timer->stop();
    }
}

Accelerator::Accelerator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Accelerator)
{
    QDir::setCurrent("E:\\Qt_5.2.1\\Projects\\Accelerator\\");


    ui->setupUi(this);

    ui->intro->raise();
    intro_timer = new QTimer(this);
    connect(intro_timer,SIGNAL(timeout()),this,SLOT(IntroTimer()));
    intro_timer->start(1500);

    db = QSqlDatabase::addDatabase("QODBC","printing_trening");
    db.setDatabaseName("accelerator_base");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("masterkey");
    db.setPort(3306);

    ui->time->setText(tim + "00:00");
    ui->current_mistakes->setText(mis + "0");
    ui->current_speed->setText(spd + "0");
    ui->past_time->setText("");
    ui->mistakes->setText("");
    ui->avg_speed->setText("");

    srand(time(NULL));

    MainMenuTextDB(db);
    ui->Text->setText(text);
    ui->Text_typed->setText("");
    InitSlowestCombinations();

    SelectBacklight(text[0]);
}

void Accelerator::SlowestCombinations(QString combination, int time)
{
     int k = -1;

    for (int i = 0; i < 5; ++i)
        if (time > comb[i].time)
        {k = i; break;}

    if (k != -1)
    {
        for (int i = 4; i > k; --i)
        comb[i] = comb[i-1];

        comb[k].time = time;
        comb[k].comb = combination.toLower();
    }
}

void CurrentTime(int time)
{
    comb_time[0] = comb_time[1];
    comb_time[1] = comb_time[2];
    comb_time[2] = comb_time[3];
    comb_time[3] = comb_time[4];
    comb_time[4] = time;
}

void Accelerator::TextTimer()
{
    ms = msec%1000; s = msec/1000; m = s/60; h = m/60; ++msec;
    QString output_time = tim + (h ? QString::number(h) + ":" : "") + (!(m/10) ? "0" : "") + QString::number(m) + ":" + (!(s/10) ? "0" : "") + QString::number(s) + ":" + QString::number(ms);
    ui->time->setText(output_time);
}

void Accelerator::RedrawSpeedTimer()
{
    int delta = msec - msec_pred;
    if (delta > 800) comb_time[4] = delta;
    int time = 0;
    for (int i = 0; i < 5; ++i)
        time += comb_time[i];
    ui->current_speed->setText(spd + QString::number(5*60000/time));
}

void Accelerator::ShowResultTimer()
{
    ui->past_time->setText("");
    ui->mistakes->setText("");
    ui->avg_speed->setText("");
    show_result_timer->stop();
}

void Accelerator::RedBorderTimer()
{
    ui->text_background->setStyleSheet(green_border);
    red_border_timer->stop();
}

void Accelerator::on_Input_textEdited(const QString &arg1)
{
    if (!msec)
    {
        ++msec; text_timer = new QTimer(this);
        connect(text_timer,SIGNAL(timeout()),this,SLOT(TextTimer()));
        text_timer->start(1);
    }
    
    if (arg1 == (QString)text[0])
    {
        if (!redraw_speed_timer->isActive())
        {
            redraw_speed_timer = new QTimer(this);
            connect(redraw_speed_timer,SIGNAL(timeout()),this,SLOT(RedrawSpeedTimer()));
            redraw_speed_timer->start(800);
        }

        int delta = msec - msec_pred;
        CurrentTime(delta);
        if (!(curr_comb == "" || text[0] == ' ')) SlowestCombinations(curr_comb+text[0],delta);

        msec_pred = msec;
        if (text[0] == ' ') curr_comb = "";
        else curr_comb = text[0];

        text.remove(0,1);
        SelectBacklight(text[0]);

        if (text == "")
        {
            OutputComb();

            ui->past_time->setText(ui->time->text());
            ui->mistakes->setText(ui->current_mistakes->text());
            ui->avg_speed->setText(spd + QString::number(text_length * 60000 / msec));
            ui->time->setText(tim + "00:00");
            ui->current_mistakes->setText(mis + "0");
            ui->current_speed->setText(spd + "0");

            if (tut) changeText(tut, ++tutorial_number);
            if (k) if (!tut) changeText(0,i = rand()%k);
            ui->Text_typed->setText("");

            DefaultValues();

            if (show_result_timer->isActive()) show_result_timer->stop();
            show_result_timer = new QTimer(this);
            connect(show_result_timer,SIGNAL(timeout()),this,SLOT(ShowResultTimer()));
            show_result_timer->start(10000);
        }
        else ui->Text_typed->setText(ui->Text_typed->text()+arg1);
        ui->Text->setText(text);
    }
    else
    {
        ++mistakes;
        ui->current_mistakes->setText(mis + QString::number(mistakes));
        ui->text_background->setStyleSheet(red_border);

        if (red_border_timer->isActive()) red_border_timer->stop();
        red_border_timer = new QTimer(this);
        connect(red_border_timer,SIGNAL(timeout()),this,SLOT(RedBorderTimer()));
        red_border_timer->start(500);
    }
    ui->Input->setText("");
}

void Accelerator::on_Autorization_clicked()
{
    if (!autorized)
    {
        Autorization sign_in;
        sign_in.setModal(true);
        sign_in.exec();

        if (autorized)
        {
            ui->tutorial->setEnabled(true);
            ui->tutorial->setToolTip("Обучающий курс слепой печати");
            ui->texts->setEnabled(true);
            ui->texts->setToolTip("Тренировка на пользовательских текстах");
        }
    }
    else
    {
        User user;
        user.setWindowTitle(login);
        user.setModal(true);
        user.exec();

        if (!autorized)
        {
            ui->tutorial->setEnabled(false);
            ui->tutorial->setToolTip("Обучающий курс слепой печати (необходимо войти)");
            ui->texts->setEnabled(false);
            ui->texts->setToolTip("Тренировка печати на пользовательских текстах (необходимо войти)");
            if (k) changeText(tut,i = rand()%k);
            ui->Text->setText(text);
            ui->Text_typed->setText("");
            SelectBacklight(text[0]);
        }
    }
}

void Accelerator::on_tutorial_clicked()
{
    if (!tut)
    {
        TutorialText();
        tut = 1;
        db.open();
        QSqlQuery query = QSqlQuery(db);
        query.exec("SELECT current_subject_id FROM current_data");
        query.next();
        QMessageBox::warning(this,"information",QString::number(query.value(0).toInt()));
        changeText(tut, query.value(0).toInt());
        db.close();
        ui->Text->setText(text);
        ui->Text_typed->setText("");
        DefaultValues();
    }
}

void Accelerator::on_RandomText_clicked()
{
    if (k) changeText(0,i = rand()%k);
    ui->Text->setText(text);
    ui->Text_typed->setText("");
    DefaultValues();
}

void Accelerator::on_Quit_clicked()
{
    QApplication::quit();
}

Accelerator::~Accelerator()
{
    delete ui;
}

void Accelerator::on_About_clicked()
{
    About about;
    about.setModal(true);
    about.exec();
}

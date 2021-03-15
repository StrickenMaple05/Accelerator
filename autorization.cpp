#include "accelerator.h"
#include "autorization.h"
#include "ui_autorization.h"
#include <QRegExpValidator>
#include <QMessageBox>
#include <QString>
#include <QPixmap>
#include <QIcon>
#include <QFile>

bool autorized = 0;
QRegExp rx("[A-Za-z0-9]{1,30}");
QString login, password;

Autorization::Autorization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Autorization)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("accelerator_base");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("masterkey");
    db.setPort(3306);

    ui->login_input->setValidator (new QRegExpValidator (rx, this));
    ui->passw_input->setValidator(new QRegExpValidator (rx, this));
}

void Autorization::on_enter_clicked()
{

    login = ui->login_input->text();
    password = ui->passw_input->text();

    db.open();

    QSqlQuery query = QSqlQuery(db);
    query.prepare("SELECT login(?,?)");
    query.addBindValue(login);
    query.addBindValue(password);
    query.exec(); query.next();
    if (query.value(0).toInt()) autorized = 1;

    if (autorized)
    {
        QMessageBox::information(this, "Вход", "Авторизация прошла успешно!");
        db.close();
        close();
    }
    else
    {
        QMessageBox::warning(this, "Вход","Ошибка! Проверьте правильность логина и пароля");
        ui->passw_input->setText("");
        db.close();
    }
}


void Autorization::on_registration_clicked()
{
    login = ui->login_input->text();
    password = ui->passw_input->text();
    if ((login == "") || (password == ""))
    {
        QMessageBox::warning(this,"Регистрация","Ошибка! Введите данные полностью!");
        return;
    }
    db.open();
    QSqlQuery query = QSqlQuery(db);
    query.prepare("SELECT registration(?,?)");
    query.addBindValue(login);
    query.addBindValue(password);
    query.exec(); query.next();
    if (!query.value(0).toInt()) QMessageBox::warning(this, "Регистрация","Ошибка! пользователь с таким логином уже существует!");
    else
    {
        QMessageBox::information(this, "Регистрация", "Авторизация прошла успешно!");
        autorized = 1; close();
    }
    db.close();
}

Autorization::~Autorization()
{
    delete ui;
}

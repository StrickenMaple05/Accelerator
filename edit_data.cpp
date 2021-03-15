#include "user.h"
#include "edit_data.h"
#include "ui_edit_data.h"
#include "autorization.h"
#include <QRegExpValidator>
#include <QMessageBox>
#include <QFile>
#include <QDir>

extern QString login, password;
extern QRegExp rx;

Edit_data::Edit_data(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit_data)
{
    ui->setupUi(this);

    ui->login_input->setValidator (new QRegExpValidator (rx, this));
    ui->old_passw_input->setValidator(new QRegExpValidator (rx, this));
    ui->new_pass_input->setValidator (new QRegExpValidator (rx, this));
    ui->confirm_pass_input->setValidator(new QRegExpValidator (rx, this));
}

void Edit_data::on_done_clicked()
{
    QString log = ui->login_input->text();
    if ((log!="")&&(log!=login))
    {
        QFile users("users.txt"); bool exists = 0;
        QString buf;
        if (users.exists()&&users.open(QIODevice::ReadOnly))
        {
            while (!(exists || users.atEnd()))
            {
                buf = QString(users.readLine());
                buf.chop(buf.length()-buf.indexOf('\t',1));
                if (buf == log) exists = 1;
            }
            if (exists)
            {
                QMessageBox::warning(this, "Ошибка","Пользователь с таким логином уже существует!");
                ui->login_input->setText(""); users.close();
                return;
            }
            users.close();
        }
    }

    QString p = ui->old_passw_input->text();
    if (p == "")
        QMessageBox::warning(this, "Ошибка","Введите старый пароль!");
    else if (p!=password)
    {
        QMessageBox::warning(this, "Ошибка","Старый пароль введён неправильно!");
        ui->old_passw_input->setText("");
    }
    else if (ui->new_pass_input->text() == "")
        QMessageBox::warning(this,"Ошибка","Введите новый пароль!");
    else if (ui->new_pass_input->text() != ui->confirm_pass_input->text())
    {
        QMessageBox::warning(this, "Ошибка","Не получилось подвердить пароль. Проверьте правильность ввода!");
        ui->confirm_pass_input->setText("");
    }
    else if (p == ui->new_pass_input->text())
        QMessageBox::warning(this,"Ошибка","Новый пароль совпадает со старым!");
    else
    {
        QMessageBox::information(this, "Изменение", "Данные успешно обновлены!");
        close();
    }
}

void Edit_data::on_cancel_clicked()
{
    close();
}

Edit_data::~Edit_data()
{
    delete ui;
}

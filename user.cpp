#include "user.h"
#include "ui_user.h"
#include "accelerator.h"
#include "autorization.h"
#include "edit_data.h"

extern bool autorized;
extern QString login,password;
extern bool tut;

User::User(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
}


void User::on_edit_data_clicked()
{
    Edit_data edit_data;
    edit_data.setModal(true);
    edit_data.exec();
}

void User::on_log_out_clicked()
{
    login = ""; password = ""; tut = 0;
    autorized = 0; close();
}

void User::on_close_clicked()
{
    close();
}

User::~User()
{
    delete ui;
}

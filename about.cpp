#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
}

void About::on_close_clicked()
{
    close();
}

About::~About()
{
    delete ui;
}

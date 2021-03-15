#ifndef AUTORIZATION_H
#define AUTORIZATION_H

#include "accelerator.h"

#include <QDialog>

namespace Ui {
class Autorization;
}

class Autorization : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase db;
    explicit Autorization(QWidget *parent = 0);
    ~Autorization();

private slots:
    void on_enter_clicked();

    void on_registration_clicked();

private:
    Ui::Autorization *ui;
};

#endif // AUTORIZATION_H

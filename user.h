#ifndef USER_H
#define USER_H

#include <QDialog>

namespace Ui {
class User;
}

class User : public QDialog
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = 0);
    ~User();

private slots:
    void on_edit_data_clicked();

    void on_log_out_clicked();

    void on_close_clicked();


private:
    Ui::User *ui;
};

#endif // USER_H

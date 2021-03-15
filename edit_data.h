#ifndef EDIT_DATA_H
#define EDIT_DATA_H

#include <QDialog>

namespace Ui {
class Edit_data;
}

class Edit_data : public QDialog
{
    Q_OBJECT

public:
    explicit Edit_data(QWidget *parent = 0);
    ~Edit_data();

private slots:
    void on_done_clicked();

    void on_cancel_clicked();

private:
    Ui::Edit_data *ui;
};

#endif // EDIT_DATA_H

#ifndef ACCELERATOR_H
#define ACCELERATOR_H

#include <QMainWindow>
#include <QSqlQuery>


#include <QMessageBox>
#include <QString>
#include <QPixmap>
#include <QTimer>
#include <QFile>
#include <QIcon>
#include <QDir>


namespace Ui {
class Accelerator;
}

class Accelerator : public QMainWindow
{
    Q_OBJECT

public:

    QSqlDatabase db;
    explicit Accelerator(QWidget *parent = 0);
    ~Accelerator();

private slots:
    void on_Input_textEdited(const QString &arg1);

    void on_Autorization_clicked();

    void on_RandomText_clicked();

    void on_tutorial_clicked();

    void on_About_clicked();

    void on_Quit_clicked();

    void IntroTextTimer();

    void IntroTimer();

    void TextTimer();

    void RedBorderTimer();

    void ShowResultTimer();

    void RedrawSpeedTimer();

    void SelectBacklight(QChar c);

    void SlowestCombinations(QString combination, int time);

    void DefaultValues();


private:
    Ui::Accelerator *ui;
};

#endif // ACCELERATOR_H


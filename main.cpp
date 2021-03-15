#include "accelerator.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Accelerator w;
    w.setFixedSize(1130,700);
    w.show();


    return a.exec();
}

#include "uppermaster.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UpperMaster w;
    w.show();

    return a.exec();
}

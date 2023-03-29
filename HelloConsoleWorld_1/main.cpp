#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    int x = 20;
    QString msg ("Hello Console");
    qWarning() <<msg<< x;
    //return a.exec();
}

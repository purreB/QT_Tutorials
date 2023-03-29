#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include <QTextStream>
#include <QObject>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTranslator translator;
    QTextStream out_stream(stdout);

    bool result = translator.load("trans_swe");

    if (!result) {
        out_stream << "ERROR: failed to load translation file.";
    } else {
        a.installTranslator(&translator);
    }


    QString msg1 = QObject::tr("Hello my friend.");
    QString msg2 = QObject::tr("Goodbye");


    out_stream << msg1 << '\n' << msg2 << endl;

    return a.exec();
}

#include "mainwindow.h"
#include <QFontDatabase>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int fontId = QFontDatabase::addApplicationFont(":/fonto/behance-65a9ae29a5cd4.ttf");
    QString family;
    if (fontId != -1) {
        family = QFontDatabase::applicationFontFamilies(fontId).at(0);
        QFont font(family);

    }else{
        qWarning("Failed to load font.");
    }

    MainWindow w;
    w.show();
    return a.exec();
}

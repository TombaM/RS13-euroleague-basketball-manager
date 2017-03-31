#include "mainwindow.h"
#include <QApplication>
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.resize(800, 800);
    window.show();
    window.setWindowTitle(
                QApplication::translate("euroleague basketball_manager", "euroleague_basketball_manager"));
    return app.exec();
}

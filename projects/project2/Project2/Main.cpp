
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setStyle( "plastique" );
    MainWindow w;
    w.show();

    return app.exec();
}
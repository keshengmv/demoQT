#define RUN_MODE
#define SHOW_OPTIONS

#include "demoQT.h"
#include <QtWidgets/QApplication>
#include <QDebug>

int main(int argc, char* argv[])
{

#ifdef RUN_MODE
    qDebug() << "Window running in Debug Mode";
#endif

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
    qDebug() << "Using Qt 6";
#endif

    QApplication app(argc, argv);
    demoQT window;
    window.show();
    return app.exec();
}

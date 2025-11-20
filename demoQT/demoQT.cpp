#include "demoQT.h"
#include <QDebug>

demoQT::demoQT(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

#ifdef SHOW_DEBUG_BUTTON
    ui.btnClick->setVisible(true);
    qDebug() << "Debug button is visible";
#else
    ui.btnClick->setVisible(false);
    qDebug() << "Debug button is hidden";
#endif
}

demoQT::~demoQT()
{
}



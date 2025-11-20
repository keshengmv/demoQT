#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_demoQT.h"

class demoQT : public QMainWindow
{
    Q_OBJECT

public:
    demoQT(QWidget *parent = nullptr);
    ~demoQT();

private:
    Ui::demoQTClass ui;
};


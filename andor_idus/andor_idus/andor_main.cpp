#include "andor_main.h"
#include "ui_andor_main.h"

andor_main::andor_main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::andor_main)
{
    ui->setupUi(this);
}

andor_main::~andor_main()
{
    delete ui;
}

#include "andor_main.h"
#include "ui_andor_main.h"
#include "ATMCD32D.h"

andor_main::andor_main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::andor_main)
{
    ui->setupUi(this);
}

andor_main::~andor_main()
{
    delete ui;
    uint status1=CoolerOFF();
    uint status2=ShutDown();
}

void andor_main::on_pushButton_clicked()
{
    long num;
    uint status=GetAvailableCameras(&num);
    ui->textBrowser->setText(QString::number(status));
    ui->textBrowser_2->setText(QString::number(num));
}

#ifndef ANDOR_MAIN_H
#define ANDOR_MAIN_H

#include <QMainWindow>

namespace Ui {
class andor_main;
}

class andor_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit andor_main(QWidget *parent = 0);
    ~andor_main();

private:
    Ui::andor_main *ui;
};

#endif // ANDOR_MAIN_H

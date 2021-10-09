#ifndef MIREADER_H
#define MIREADER_H

#include <QMainWindow>

namespace Ui {
    class miReader;
}

class miReader : public QMainWindow
{
    Q_OBJECT

public:
    explicit miReader(QWidget *parent = 0);
    ~miReader();

public slots:
    //void start();
    void getpath();
    void slInit();
    void result();
    //void time();
    void processend();
    void readFromStdout();

void start();

private:
    Ui::miReader *ui;
};

#endif // MIREADER_H

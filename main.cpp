#include <QtGui/QApplication>
#include "mireader.h"
#include <QSplashScreen>
#include <QTimer>
 #include <QLabel>
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

     QPixmap pixmap ("miReader.png");
 QSplashScreen splash(pixmap,Qt::WindowStaysOnTopHint);
a.processEvents();
splash.setMask(pixmap.mask());
splash.show();
    splash.setStyleSheet("background-color: transparent");
QString qs = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                          Initializing ...\n                                                                           Please wait";
//QRgb col = new QRgb(0, 0, 255);

splash.showMessage(qs);
    miReader w;

    w.setWindowOpacity(0);
       w.setWindowOpacity(0.0);
       w.setWindowTitle("miReader");

    w.show();
    QTimer::singleShot(6000, &splash, SLOT(close()));
    QTimer::singleShot(6000, &w, SLOT(slInit()));

    return a.exec();
}

#include "mainwindow.h"
#include <QtWebView/QtWebView>
#include <QApplication>

int main(int argc, char *argv[])
{
    QtWebView::initialize();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

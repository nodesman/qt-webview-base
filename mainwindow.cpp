#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWebView/QtWebView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->webView = new QWebEngineView(this);
    this->webView->load(QUrl("http://www.google.com"));
    this->setCentralWidget(webView);

}

MainWindow::~MainWindow()
{
    delete ui;
}


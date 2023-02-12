#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWebView/QtWebView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->webView = new QtWebView(this);
    this->setCentralWidget(this->webView);
    webView->load(QUrl("http://www.google.com"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


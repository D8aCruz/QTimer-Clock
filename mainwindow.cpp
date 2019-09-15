#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,[&](){
        QTime time = QTime::currentTime();
        ui->label->setText(time.toString("hh:mm:ss"));
    });
    timer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}


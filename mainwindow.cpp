#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    notify_init("Hello World");
    NotifyNotification *hello = notify_notification_new("Hello world", "This is an example notification.", "dialog-information");
    notify_notification_show(hello, NULL);
}

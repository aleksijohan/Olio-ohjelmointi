
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnReset,&QPushButton::clicked,this, &MainWindow::ClickedReset);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter++;
    qDebug()<< " " << counter;
    QString s = QString::number(counter);
    ui->txtResult->setText(" " + s);
    ui->labellinfo->setText("Painiketta count painettu "+ s + " kertaa");

}

void MainWindow::ClickedReset()
{
    counter = 0;
    qDebug()<< " " << counter;
    QString s = QString::number(counter);
    ui->txtResult->setText(" " + s);
    ui->labellinfo->setText("Painiketta count painettu "+ s + " kertaa");


}

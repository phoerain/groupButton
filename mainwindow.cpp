#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //分组
    QButtonGroup *group1 = new QButtonGroup;
    group1->addButton(ui->radioButton);
    group1->addButton(ui->radioButton_2);
    group1->addButton(ui->radioButton_3);
    QButtonGroup *group2 = new QButtonGroup;
    group2->addButton(ui->radioButton_4);
    group2->addButton(ui->radioButton_5);
    group2->addButton(ui->radioButton_6);
    QButtonGroup *group3 = new QButtonGroup;
    group3->addButton(ui->radioButton_7);
    group3->addButton(ui->radioButton_8);
    group3->addButton(ui->radioButton_9);
}

MainWindow::~MainWindow()
{
    delete ui;
}


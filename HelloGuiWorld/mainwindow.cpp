#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->exitButton->setText("Exit Now");
    connect(ui->exitButton, &QPushButton::clicked, this, &QMainWindow::close);
    //connect(ui->exitButton, SIGNAL(clicked()), SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

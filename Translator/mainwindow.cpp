#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "morsecode.h"
#include "PigLatin.cpp"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonTranslate,SIGNAL(released()),this,SLOT(transaltionRequested()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::transaltionRequested() {

    MorseCode textToBeTranslated (ui->userInput->toPlainText());
    ui->translationOutput->setText(textToBeTranslated.getTranslation());


}

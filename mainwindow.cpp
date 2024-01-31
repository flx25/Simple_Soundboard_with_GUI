#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sound = new Sound;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete sound;
}


void MainWindow::on_F1_clicked()
{
    if(sound->Soundfiles[0] == "")
        return;
    sound->player->setSource(QUrl::fromLocalFile(sound->Soundfiles[0]));

    // Play the sound
    sound->player->play();

}

void MainWindow::on_pushButton_clicked()
{
     QFileDialog fileDialog;

     fileDialog.setFileMode(QFileDialog::ExistingFile);
     fileDialog.exec();
     sound->Soundfiles[0] = fileDialog.selectedFiles().first();


}


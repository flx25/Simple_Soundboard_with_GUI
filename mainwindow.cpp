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

void MainWindow::on_F2_clicked()
{
    if(sound->Soundfiles[1] == "")
        return;
    sound->player->setSource(QUrl::fromLocalFile(sound->Soundfiles[1]));

    // Play the sound
    sound->player->play();
}

void MainWindow::on_pushButton_2_clicked()
{
    QFileDialog fileDialog;

    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.exec();
    sound->Soundfiles[1] = fileDialog.selectedFiles().first();
}

void MainWindow::on_F3_clicked()
{
    if(sound->Soundfiles[2] == "")
        return;
    sound->player->setSource(QUrl::fromLocalFile(sound->Soundfiles[2]));

    // Play the sound
    sound->player->play();
}

void MainWindow::on_pushButton_3_clicked()
{
    QFileDialog fileDialog;

    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.exec();
    sound->Soundfiles[2] = fileDialog.selectedFiles().first();
}

void MainWindow::on_F4_clicked()
{
    if(sound->Soundfiles[3] == "")
        return;
    sound->player->setSource(QUrl::fromLocalFile(sound->Soundfiles[3]));

    // Play the sound
    sound->player->play();
}

void MainWindow::on_pushButton_4_clicked()
{
    QFileDialog fileDialog;

    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.exec();
    sound->Soundfiles[3] = fileDialog.selectedFiles().first();
}

void MainWindow::on_F5_clicked()
{
    if(sound->Soundfiles[4] == "")
        return;
    sound->player->setSource(QUrl::fromLocalFile(sound->Soundfiles[4]));

    // Play the sound
    sound->player->play();
}

void MainWindow::on_pushButton_5_clicked()
{
    QFileDialog fileDialog;

    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.exec();
    sound->Soundfiles[4] = fileDialog.selectedFiles().first();
}

void MainWindow::on_F6_clicked()
{
    if(sound->Soundfiles[5] == "")
        return;
    sound->player->setSource(QUrl::fromLocalFile(sound->Soundfiles[5]));

    // Play the sound
    sound->player->play();
}

void MainWindow::on_pushButton_6_clicked()
{
    QFileDialog fileDialog;

    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.exec();
    sound->Soundfiles[5] = fileDialog.selectedFiles().first();
}

void MainWindow::on_F7_clicked()
{
    if(sound->Soundfiles[6] == "")
        return;
    sound->player->setSource(QUrl::fromLocalFile(sound->Soundfiles[6]));

    // Play the sound
    sound->player->play();
}

void MainWindow::on_pushButton_7_clicked()
{
    QFileDialog fileDialog;

    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.exec();
    sound->Soundfiles[6] = fileDialog.selectedFiles().first();
}

void MainWindow::on_F8_clicked()
{
    if(sound->Soundfiles[7] == "")
        return;
    sound->player->setSource(QUrl::fromLocalFile(sound->Soundfiles[7]));

    // Play the sound
    sound->player->play();
}

void MainWindow::on_pushButton_8_clicked()
{
    QFileDialog fileDialog;

    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.exec();
    sound->Soundfiles[7] = fileDialog.selectedFiles().first();
}

void MainWindow::on_F9_clicked()
{
    if(sound->Soundfiles[8] == "")
        return;
    sound->player->setSource(QUrl::fromLocalFile(sound->Soundfiles[8]));

    // Play the sound
    sound->player->play();
}

void MainWindow::on_pushButton_9_clicked()
{
    QFileDialog fileDialog;

    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.exec();
    sound->Soundfiles[8] = fileDialog.selectedFiles().first();
}

void MainWindow::on_F10_clicked()
{
    if(sound->Soundfiles[9] == "")
        return;
    sound->player->setSource(QUrl::fromLocalFile(sound->Soundfiles[9]));

    // Play the sound
    sound->player->play();
}

void MainWindow::on_pushButton_10_clicked()
{
    QFileDialog fileDialog;

    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.exec();
    sound->Soundfiles[9] = fileDialog.selectedFiles().first();
}



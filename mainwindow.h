#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QFileDialog>
#include <iostream>
#include <string>
#include "sound.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_F1_clicked();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Sound *sound;

};
#endif // MAINWINDOW_H

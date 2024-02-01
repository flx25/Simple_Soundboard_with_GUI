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

    void on_pushButton_11_clicked();

    void on_F2_clicked();

    void on_F3_clicked();

    void on_F4_clicked();

    void on_F5_clicked();

    void on_F6_clicked();

    void on_F7_clicked();

    void on_F8_clicked();

    void on_F9_clicked();

    void on_F10_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
    Sound *sound;

};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "shiplist.h"
#include <memory>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int id[5]{0, 0, 0, 0, 0};
    bool Lock = false;

private slots:
    void on_pushButton_clicked();

    void on_add_plus_clicked();

    void on_add_minus_clicked();

    void on_add_plus_2_clicked();

    void on_add_minus_2_clicked();

    void on_add_plus_3_clicked();

    void on_add_minus_3_clicked();

    void on_add_plus_4_clicked();

    void on_add_minus_4_clicked();

    void on_add_plus_5_clicked();

    void on_add_minus_5_clicked();

private:
    Ui::MainWindow *ui;



};
#endif // MAINWINDOW_H

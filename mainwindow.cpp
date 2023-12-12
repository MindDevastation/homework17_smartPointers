#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <memory>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->add_plus->setEnabled(false);
    ui->add_plus_2->setEnabled(false);
    ui->add_plus_3->setEnabled(false);
    ui->add_plus_4->setEnabled(false);
    ui->add_plus_5->setEnabled(false);

    ui->add_minus->setEnabled(false);
    ui->add_minus_2->setEnabled(false);
    ui->add_minus_3->setEnabled(false);
    ui->add_minus_4->setEnabled(false);
    ui->add_minus_5->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    std::shared_ptr<shopOrder[]> SHOPORDER(new shopOrder[5]);
    SHOPORDER[0].SHOPITEM.setName("Computer");
    SHOPORDER[0].SHOPITEM.setID(1);
    SHOPORDER[0].SHOPITEM.setPrice(112.12);

    SHOPORDER[1].SHOPITEM.setName("Printer");
    SHOPORDER[1].SHOPITEM.setID(2);
    SHOPORDER[1].SHOPITEM.setPrice(71.12);

    SHOPORDER[2].SHOPITEM.setName("Mouse");
    SHOPORDER[2].SHOPITEM.setID(3);
    SHOPORDER[2].SHOPITEM.setPrice(12.83);

    SHOPORDER[3].SHOPITEM.setName("Laptop");
    SHOPORDER[3].SHOPITEM.setID(4);
    SHOPORDER[3].SHOPITEM.setPrice(512.83);

    SHOPORDER[4].SHOPITEM.setName("TV");
    SHOPORDER[4].SHOPITEM.setID(5);
    SHOPORDER[4].SHOPITEM.setPrice(73.91);

    ui->label->setText("ID: " + QString::number(SHOPORDER[0].SHOPITEM.getID()) + "\n Name: " + SHOPORDER[0].SHOPITEM.getName() + "\n Price: " + QString::number(SHOPORDER[0].SHOPITEM.getPrice()) + "$");
    ui->label_2->setText("ID: " + QString::number(SHOPORDER[1].SHOPITEM.getID()) + "\n Name: " + SHOPORDER[1].SHOPITEM.getName() + "\n Price: " + QString::number(SHOPORDER[1].SHOPITEM.getPrice()) + "$");
    ui->label_3->setText("ID: " + QString::number(SHOPORDER[2].SHOPITEM.getID()) + "\n Name: " + SHOPORDER[2].SHOPITEM.getName() + "\n Price: " + QString::number(SHOPORDER[2].SHOPITEM.getPrice()) + "$");
    ui->label_4->setText("ID: " + QString::number(SHOPORDER[3].SHOPITEM.getID()) + "\n Name: " + SHOPORDER[3].SHOPITEM.getName() + "\n Price: " + QString::number(SHOPORDER[3].SHOPITEM.getPrice()) + "$");
    ui->label_5->setText("ID: " + QString::number(SHOPORDER[4].SHOPITEM.getID()) + "\n Name: " + SHOPORDER[4].SHOPITEM.getName() + "\n Price: " + QString::number(SHOPORDER[4].SHOPITEM.getPrice()) + "$");

    ui->pushButton->setText("Make a purchase");

    ui->add_plus->setEnabled(true);
    ui->add_plus_2->setEnabled(true);
    ui->add_plus_3->setEnabled(true);
    ui->add_plus_4->setEnabled(true);
    ui->add_plus_5->setEnabled(true);


    if(Lock){

        std::shared_ptr<shopOrder> PURCHASE(new shopOrder);
        int Total = 0;
        for(int i = 0; i < 5; i++){
            Total += PURCHASE->totalPrice(id[i], SHOPORDER[i].SHOPITEM.getPrice());
        }
        ui->totalPrice->setText(" ---> " + QString::number(id[0] * SHOPORDER[0].SHOPITEM.getPrice()) + "$");
        ui->totalPrice_2->setText(" ---> " + QString::number(id[1] * SHOPORDER[1].SHOPITEM.getPrice()) + "$");
        ui->totalPrice_3->setText(" ---> " + QString::number(id[2] * SHOPORDER[2].SHOPITEM.getPrice()) + "$");
        ui->totalPrice_4->setText(" ---> " + QString::number(id[3] * SHOPORDER[3].SHOPITEM.getPrice()) + "$");
        ui->totalPrice_5->setText(" ---> " + QString::number(id[4] * SHOPORDER[4].SHOPITEM.getPrice()) + "$");

        ui->label_6->setText("You ordered: \n\n" +
                             SHOPORDER[0].SHOPITEM.getName() + " x " + QString::number(id[0]) + "\n"+
                             SHOPORDER[1].SHOPITEM.getName() + " x " + QString::number(id[1]) + "\n"+
                             SHOPORDER[2].SHOPITEM.getName() + " x " + QString::number(id[2]) + "\n"+
                             SHOPORDER[3].SHOPITEM.getName() + " x " + QString::number(id[3]) + "\n"+
                             SHOPORDER[4].SHOPITEM.getName() + " x " + QString::number(id[4]) + "\n\n"+
                             "Total Price: " + QString::number(Total) + "$");

    }

    Lock = true;
}


void MainWindow::on_add_plus_clicked()
{
    this->id[0]++;
    if(this->id[0] > 0){
        ui->add_minus->setEnabled(true);
    }
    ui->add_amount->setNum(this->id[0]);
}


void MainWindow::on_add_minus_clicked()
{
    this->id[0]--;
    if(this->id[0] == 0){
        ui->add_minus->setEnabled(false);
    }
    ui->add_amount->setNum(this->id[0]);
}


void MainWindow::on_add_plus_2_clicked()
{
    this->id[1]++;
    if(this->id[1] > 0){
        ui->add_minus_2->setEnabled(true);
    }
    ui->add_amount_2->setNum(this->id[1]);
}


void MainWindow::on_add_minus_2_clicked()
{
    this->id[1]--;
    if(this->id[1] == 0){
        ui->add_minus_2->setEnabled(false);
    }
    ui->add_amount_2->setNum(this->id[1]);
}


void MainWindow::on_add_plus_3_clicked()
{
    this->id[2]++;
    if(this->id[2] > 0){
        ui->add_minus_3->setEnabled(true);
    }
    ui->add_amount_3->setNum(this->id[2]);
}


void MainWindow::on_add_minus_3_clicked()
{
    this->id[2]--;
    if(this->id[2] == 0){
        ui->add_minus_3->setEnabled(false);
    }
    ui->add_amount_3->setNum(this->id[2]);
}


void MainWindow::on_add_plus_4_clicked()
{
    this->id[3]++;
    if(this->id[3] > 0){
        ui->add_minus_4->setEnabled(true);
    }
    ui->add_amount_4->setNum(this->id[3]);
}


void MainWindow::on_add_minus_4_clicked()
{
    this->id[3]--;
    if(this->id[3] == 0){
        ui->add_minus_4->setEnabled(false);
    }
    ui->add_amount_4->setNum(this->id[3]);
}


void MainWindow::on_add_plus_5_clicked()
{
    this->id[4]++;
    if(this->id[4] > 0){
        ui->add_minus_5->setEnabled(true);
    }
    ui->add_amount_5->setNum(this->id[4]);
}


void MainWindow::on_add_minus_5_clicked()
{
    this->id[4]--;
    if(this->id[4] == 0){
        ui->add_minus_5->setEnabled(false);
    }
    ui->add_amount_5->setNum(this->id[4]);
}


#ifndef SHIPLIST_H
#define SHIPLIST_H

#include<QString>


class shopItem
{
    int _ID;
    QString _name;
    double _price;
public:
    shopItem(){
        _ID = 0;
        _name = "nan";
        _price = 0.0;
    }

    int getID(){return _ID;}
    void setID(int newID){_ID = newID;}

    QString getName(){return _name;}
    void setName(QString newName){_name = newName;}

    double getPrice(){return _price;}
    void setPrice(double newPrice){_price = newPrice;}

};

class shopOrder
{
public:

    shopItem SHOPITEM;

    int totalPrice(int arrId, double price){
        int sum = arrId * price;
        return sum;
    }

};

#endif // SHIPLIST_H

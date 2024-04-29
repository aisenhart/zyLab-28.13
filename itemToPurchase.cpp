#include <iostream>
using namespace std;

#include "ItemToPurchase.h"


ItemToPurchase::ItemToPurchase() : itemName("none"), itemPrice(0), itemQuantity(0) {}

void ItemToPurchase::SetName(const string &name)
{
    itemName = name;
}

void ItemToPurchase::SetPrice(int price)
{
    itemPrice = price;
}

void ItemToPurchase::SetQuantity(int quantity)
{
    itemQuantity = quantity;
}

string ItemToPurchase::GetName() const
{
    return itemName;
}

int ItemToPurchase::GetPrice() const
{
    return itemPrice;
}

int ItemToPurchase::GetQuantity() const
{
    return itemQuantity;
}

Class itemToPurchase{
  public: 
    SetName(){
    }
    SetPrice(){
      
    }
      
    SetQuantity(){
      
    }
      
    GetName(){
    return itemName;
    }
    GetPrice(){
    return itemPrice
    }
    GetQuantity(){
    return itemQuantity;
    }
    

    private:
      string itemName = "none";
      int itemPrice = 0;
      int itemQuantity = 0;
      
}



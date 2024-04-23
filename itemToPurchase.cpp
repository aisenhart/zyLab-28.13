#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() : itemName("none"), itemPrice(0), itemQuantity(0) {}

void ItemToPurchase::SetName(const std::string &name)
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

std::string ItemToPurchase::GetName() const
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
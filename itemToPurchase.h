#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>

class ItemToPurchase
{
public:

    ItemToPurchase();


    void SetName(const std::string &name);
    void SetPrice(int price);
    void SetQuantity(int quantity);


    std::string GetName() const;
    int GetPrice() const;
    int GetQuantity() const;

private:
    std::string itemName;
    int itemPrice;
    int itemQuantity;
};

#endif
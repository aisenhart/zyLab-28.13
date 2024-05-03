#include "ShoppingCart.h"
#include <iostream>
using namespace std;

ShoppingCart::ShoppingCart() : customerName("none"), currentDate("January 1, 2016") {}

ShoppingCart::ShoppingCart(string name, string date) : customerName(name), currentDate(date) {}

string ShoppingCart::GetCustomerName() const
{
    return customerName;
}
string ShoppingCart::GetDate() const
{
    return currentDate;
}
void ShoppingCart::AddItem(ItemToPurchase item)
{
    cartItems.push_back(item);
}
void ShoppingCart::RemoveItem(string itemName)
{
    bool found = false;
    for (unsigned i = 0; i < cartItems.size(); ++i)
    {
        if (cartItems[i].GetName() == itemName)
        {
            cartItems.erase(cartItems.begin() + i);
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
}
void ShoppingCart::ModifyItem(ItemToPurchase item)
{
    bool found = false;
    for (ItemToPurchase &it : cartItems)
    {
        if (it.GetName() == item.GetName())
        {
            found = true;
            if (item.GetDescription() != "none")
                it.SetDescription(item.GetDescription());
            if (item.GetPrice() != 0)
                it.SetPrice(item.GetPrice());
            if (item.GetQuantity() != 0)
                it.SetQuantity(item.GetQuantity());
        }
    }
    if (!found)
    {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
}
int ShoppingCart::GetNumItemsInCart() const
{
    int totalQuantity = 0;
    for (const ItemToPurchase &item : cartItems)
    {
        totalQuantity += item.GetQuantity();
    }
    return totalQuantity;
}
int ShoppingCart::GetCostOfCart() const
{
    int totalCost = 0;
    for (const ItemToPurchase &item : cartItems)
    {
        totalCost += (item.GetPrice() * item.GetQuantity());
    }
    return totalCost;
}
void ShoppingCart::PrintTotal() const
{
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl
         << endl;
    if (cartItems.empty())
    {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
    else
    {
        for (const ItemToPurchase &item : cartItems)
        {
            item.PrintItemCost();
        }
    }
    cout << "Total: $" << GetCostOfCart() << endl;
}
void ShoppingCart::PrintDescriptions() const
{
    cout << customerName << "'s Shopping Cart - " << currentDate << endl
         << endl;
    cout << "Item Descriptions" << endl;
    if (cartItems.empty())
    {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
    else
    {
        for (const ItemToPurchase &item : cartItems)
        {
            item.PrintItemDescription();
        }
    }
}
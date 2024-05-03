// Github repository link: https://github.com/aisenhart/zyLab-28.13/tree/pt2
// Names for team members: Andrew Isenhart, Johnathan Scurtis

#include "ItemToPurchase.h"
#include "ShoppingCart.h"
#include <iostream>
#include <cctype> 
using namespace std;

void PrintMenu(ShoppingCart &cart);
void ExecuteMenu(char option, ShoppingCart &cart);

int main()
{
  string customerName, currentDate;

  cout << "Enter customer's name:" << endl;
  getline(cin, customerName);

  cout << "Enter today's date:" << endl;
  getline(cin, currentDate);

  cout << "\nCustomer name: " << customerName << endl;
  cout << "Today's date: " << currentDate << endl;

  ShoppingCart shoppingCart(customerName, currentDate);

  PrintMenu(shoppingCart);

  return 0;
}

void PrintMenu(ShoppingCart &cart)
{
  char menuOption = ' ';

  do
  {
    cout << "\nMENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl
         << endl;

    cout << "Choose an option:" << endl;
    cin >> menuOption;
    menuOption = tolower(menuOption);

    if (menuOption != 'q')
    {
      ExecuteMenu(menuOption, cart);
    }
  } while (menuOption != 'q');
}

void ExecuteMenu(char option, ShoppingCart &cart)
{
  string itemName, itemDescription;
  int itemPrice, itemQuantity;

  switch (option)
  {
  case 'a':
    cin.ignore();
    cout << "ADD ITEM TO CART" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, itemName);
    cout << "Enter the item description:" << endl;
    getline(cin, itemDescription);
    cout << "Enter the item price:" << endl;
    cin >> itemPrice;
    cout << "Enter the item quantity:" << endl;
    cin >> itemQuantity;
    cart.AddItem(ItemToPurchase(itemName, itemDescription, itemPrice, itemQuantity));
    break;

  case 'd':
    cin.ignore();
    cout << "REMOVE ITEM FROM CART" << endl;
    cout << "Enter name of item to remove:" << endl;
    getline(cin, itemName);
    cart.RemoveItem(itemName);
    break;

  case 'c':
    cin.ignore();
    cout << "CHANGE ITEM QUANTITY" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, itemName);
    cout << "Enter the new quantity:" << endl;
    cin >> itemQuantity;
    cart.ModifyItem(ItemToPurchase(itemName, "none", 0, itemQuantity));
    break;

  case 'i':
    cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
    cart.PrintDescriptions();
    break;

  case 'o':
    cout << "OUTPUT SHOPPING CART" << endl;
    cart.PrintTotal();
    break;

  default:
    cout << "Choose a valid option" << endl;
  }
}

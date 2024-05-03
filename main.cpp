// https://github.com/aisenhart/zyLab-28.13
#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main()
{

  ItemToPurchase item1;
  ItemToPurchase item2;

  string name;
  int price;
  int quantity;

  cout << "Item 1" << endl;
  cout << "Enter the item name:" << endl;
  getline(cin, name);
  item1.SetName(name);

  cout << "Enter the item price:" << endl;
  cin >> price;
  item1.SetPrice(price);

  cout << "Enter the item quantity:" << endl;
  cin >> quantity;
  item1.SetQuantity(quantity);
  cout << endl;
  cin.ignore();

  cout << "Item 2" << endl;
  cout << "Enter the item name:" << endl;
  getline(cin, name);
  item2.SetName(name);

  cout << "Enter the item price:" << endl;
  cin >> price;
  item2.SetPrice(price);

  cout << "Enter the item quantity:" << endl;
  cin >> quantity;
  item2.SetQuantity(quantity);
  cout << endl;

  cout << "TOTAL COST" << endl;
  cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetQuantity() * item1.GetPrice() << endl;
  cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetQuantity() * item2.GetPrice() << endl;
  cout << endl;
  cout << "Total: $" << item1.GetQuantity() * item1.GetPrice() + item2.GetQuantity() * item2.GetPrice() << endl;
  return 0;
}

//Teamates Jonathan Scurtis and Andrew Isenhart
//https://github.com/aisenhart/zyLab-28.13

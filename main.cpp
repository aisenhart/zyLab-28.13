#include <iostream>
#include <string>
#include <limits>
#include "ItemToPurchase.h"

int main()
{
  ItemToPurchase item1, item2;
  std::string name;
  int price, quantity;

  std::cout << "Item 1" << std::endl;
  std::cout << "Enter the item name:" << std::endl;
  std::getline(std::cin, name);
  item1.SetName(name);

  std::cout << "Enter the item price:" << std::endl;
  std::cin >> price;
  item1.SetPrice(price);

  std::cout << "Enter the item quantity:" << std::endl;
  std::cin >> quantity;
  item1.SetQuantity(quantity);

  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer

  std::cout << "Item 2" << std::endl;
  std::cout << "Enter the item name:" << std::endl;
  std::getline(std::cin, name);
  item2.SetName(name);

  std::cout << "Enter the item price:" << std::endl;
  std::cin >> price;
  item2.SetPrice(price);

  std::cout << "Enter the item quantity:" << std::endl;
  std::cin >> quantity;
  item2.SetQuantity(quantity);

  std::cout << "TOTAL COST" << std::endl;
  std::cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetQuantity() * item1.GetPrice() << std::endl;
  std::cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetQuantity() * item2.GetPrice() << std::endl;
  std::cout << "Total: $" << (item1.GetQuantity() * item1.GetPrice() + item2.GetQuantity() * item2.GetPrice()) << std::endl;

  return 0;
}
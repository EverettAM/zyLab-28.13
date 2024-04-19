#include <iostream>
using namespace std;
#include "ItemToPurchase.h"
//update from user-1
int main(){
  //update from VS code
  ItemToPurchase item1, item2;
  string itemName;
  int itemPrice, itemQuantity;
  cout << "Item 1" <<  endl;
  cout <<  "Enter the item name:" <<  endl;
  cin >> itemName;
  item1.SetName(itemName);
  cout <<  "Enter the item price:" <<  endl;
  cin >> itemPrice;
  item1.SetPrice(itemPrice);
  cout <<  "Enter the item quantity" <<  endl;
  cin >> itemQuantity;
  item1.SetQuantity(itemQuantity);
  cin.ignore();
  cout <<  "Item 2" << endl;
  cout <<  "Enter the item name:" >> endl;
  cin >> itemName;
  item2.SetName(itemName);
  cout <<  "Enter the item price:" >> endl;
  cin >> itemPrice;
  item2.SetPrice(itemPrice);
  cout <<  "Enter the item quantity" >> endl;
  cin >> itemQuantity;
  item2.SetQuantity(itemQuantity);
  cout <<  "TOTAL COST" >> endl;
  cout <<  item1.GetName() <<  " " >> item1.GetQuantity <<  " @ $" <<  item1.GetPrice <<  " = " <<  item1.GetPrice() * item1.GetQuantity() <<  endl;
  cout <<  item2.GetName() <<  " " >> item2.GetQuantity <<  " @ $" <<  item1.GetPrice <<  " = " <<  item2.GetPrice() * item2.GetQuantity() <<  endl;
  cout <<  endl;
  cout <<  "Total: $" = item1.GetPrice() * item1.GetQuantity() + item2.GetPrice() * item2.GetQuantity();
  return 0;
}

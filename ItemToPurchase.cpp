#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

void ItemToPurchase::SetName(string newName){
  itemName = newName;
}
string ItemToPurchase::GetName(){
  return name;
}

void ItemToPurchase::SetPrice(int newPrice){
  itemPrice = newPrice;
}
int ItemToPurchase::GetPrice(){
  return itemPrice;
}

void ItemToPurchase::SetQuantity(int newQuantity){
  itemQuantity = newQuantity;
}

int ItemToPurchase::GetQuantity(){
  return itemQuantity;
}

ItemToPurchase::ItemToPurchase(){
  itemName = "none";
  itemPrice = 0;
  itemQuantity = 0;
}

#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

void ItemsToPurchase::SetName(string newName){
  itemName = newName;
}
string ItemsToPurchase::GetName(){
  return name;
}

void ItemsToPurchase::SetPrice(int newPrice){
  itemPrice = newPrice;
}
int ItemsToPurchase::GetPrice(){
  return itemPrice;
}

void ItemsToPurchase::SetQuantity(int newQuantity){
  itemQuantity = newQuantity;
}

int ItemsToPurchase::GetQuantity(){
  return itemQuantity;
}

ItemsToPurchase::ItemsToPurchase(){
  itemName = "none";
  itemPrice = 0;
  itemQuantity = 0;
}

#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

void ItemToPurchase::SetName(string newName){
  itemName = newName;
}
string ItemToPurchase::GetName(){
  return name;
}

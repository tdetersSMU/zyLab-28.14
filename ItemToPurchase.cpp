#include "ItemToPurchase.h"
#include <iostream>
using namespace std;
ItemToPurchase::ItemToPurchase() : itemName("none"), itemDescription("none"), itemPrice(0), itemQuantity(0) {}

ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity)
    : itemName(name), itemDescription(description), itemPrice(price), itemQuantity(quantity) {}

void ItemToPurchase::SetName(string name) {
    itemName = name;
}

void ItemToPurchase::SetDescription(string description) {
    itemDescription = description;
}

void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

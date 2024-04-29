#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <string>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart {
public:
    ShoppingCart();
    ShoppingCart(string name, string date);
    
    string GetCustomerName() const;
    string GetDate() const;
    
    void AddItem(ItemToPurchase item);
    void RemoveItem(string name);
    void ModifyItem(ItemToPurchase item);
    
    int GetNumItemsInCart() const;
    double GetCostOfCart() const;
    
    void PrintTotal();
    void PrintDescriptions();

private:
    string customerName;
    string currentDate;
    vector<ItemToPurchase> cartItems;
};

#endif

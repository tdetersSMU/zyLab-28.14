/* Type your code here */
#include "ShoppingCart.h"
#include <iostream>
#include <algorithm>
using namespact std;

//defaults from the given program in zybooks
ShoppingCart::ShoppingCart() : customerName ("none"), currentDate("January 1, 2016") {}
ShoppingCart::ShoppingCart(string name, string date): customerName(move(name)), currentDate(move(date)){}

//adds the items to the cart
void Shopping Cart::AddItem(ItemToPurchase item) {
  cartItems.push_back(move(item));}
//return the name of the customer of the cart
string ShoppingCart::GetCustomerName() const {
  return customerName;}
//please check to make sure that the variable names line up

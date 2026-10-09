#include <iostream>
#include <string>
#include "Restaurant.h"

int main() {
    Restaurant restaurant;

    MenuItem m1(1, "Burger", 120.0, "Fast Food");
    MenuItem m2(2, "Pizza", 200.0, "Italian");
    MenuItem m3(3, "Tea", 50.0, "Beverage");

    restaurant.addMenuItem(m1);
    restaurant.addMenuItem(m2);
    restaurant.addMenuItem(m3);

    Customer c1(1, "Ali", "0300-1234567", "Lahore");
    restaurant.addCustomer(c1);

    Order order(1, 1);
    order.addItem(1, "Burger", 2, 120.0);
    order.addItem(3, "Tea", 2, 50.0);
    restaurant.placeOrder(order);

    std::cout << "\nRestaurant Management System\n";
    restaurant.displayMenu();
    restaurant.displayCustomers();
    restaurant.displayOrders();

    std::cout << "\nTotal Bill for Order 1: " << order.getTotalAmount() << "\n";

    restaurant.saveData();

    return 0;
}
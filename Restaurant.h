#pragma once
#include <vector>
#include "MenuItem.h"
#include "Customer.h"
#include "Order.h"

class Restaurant {
private:
    std::vector<MenuItem> menu;
    std::vector<Customer> customers;
    std::vector<Order> orders;

public:
    Restaurant();

    void addMenuItem(const MenuItem& item);
    void removeMenuItem(int itemId);
    void displayMenu() const;
    void addCustomer(const Customer& customer);
    void displayCustomers() const;

    void placeOrder(const Order& order);
    void displayOrders() const;

    void saveData() const;
    void loadData();
};
#include "Restaurant.h"
#include "Database.h"
#include <iostream>

Restaurant::Restaurant() {
    loadData();
}

void Restaurant::addMenuItem(const MenuItem& item) {
    menu.push_back(item);
}

void Restaurant::removeMenuItem(int itemId) {
    for (auto it = menu.begin(); it != menu.end(); ++it) {
        if (it->getId() == itemId) {
            menu.erase(it);
            return;
        }
    }
}

void Restaurant::displayMenu() const {
    std::cout << "\n--- Menu ---\n";
    for (const auto& item : menu) {
        std::cout << item.getId() << " | "
                  << item.getName() << " | "
                  << item.getPrice() << " | "
                  << item.getCategory() << "\n";
    }
}

void Restaurant::addCustomer(const Customer& customer) {
    customers.push_back(customer);
}

void Restaurant::displayCustomers() const {
    std::cout << "\n--- Customers ---\n";
    for (const auto& customer : customers) {
        std::cout << customer.getId() << " | "
                  << customer.getName() << " | "
                  << customer.getPhone() << "\n";
    }
}

void Restaurant::placeOrder(const Order& order) {
    orders.push_back(order);
}

void Restaurant::displayOrders() const {
    std::cout << "\n--- Orders ---\n";
    for (const auto& order : orders) {
        std::cout << "Order ID: " << order.getId()
                  << " | Customer ID: " << order.getCustomerId()
                  << " | Total: " << order.getTotalAmount() << "\n";
    }
}

void Restaurant::saveData() const {
    Database::saveMenu(menu, "data/menu.txt");
    Database::saveCustomers(customers, "data/customers.txt");
    Database::saveOrders(orders, "data/orders.txt");
}

void Restaurant::loadData() {
    menu = Database::loadMenu("data/menu.txt");
    customers = Database::loadCustomers("data/customers.txt");
    orders = Database::loadOrders("data/orders.txt");
}
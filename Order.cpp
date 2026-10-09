#include "Order.h"
#include <iostream>

Order::Order() : id(0), customerId(0), totalAmount(0.0) {}

Order::Order(int id, int customerId) : id(id), customerId(customerId), totalAmount(0.0) {}

int Order::getId() const { return id; }
int Order::getCustomerId() const { return customerId; }
std::vector<OrderItem> Order::getItems() const { return items; }
double Order::getTotalAmount() const { return totalAmount; }

void Order::addItem(int itemId, const std::string& itemName, int quantity, double price) {
    OrderItem item;
    item.itemId = itemId;
    item.itemName = itemName;
    item.quantity = quantity;
    item.price = price;
    items.push_back(item);
    calculateTotal();
}

void Order::removeItem(int itemId) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (it->itemId == itemId) {
            items.erase(it);
            calculateTotal();
            return;
        }
    }
}

void Order::calculateTotal() {
    totalAmount = 0.0;
    for (const auto& item : items) {
        totalAmount += item.price * item.quantity;
    }
}
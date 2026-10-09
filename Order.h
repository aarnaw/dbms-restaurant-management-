#pragma once
#include <string>
#include <vector>

struct OrderItem {
    int itemId;
    std::string itemName;
    int quantity;
    double price;
};

class Order {
private:
    int id;
    int customerId;
    std::vector<OrderItem> items;
    double totalAmount;

public:
    Order();
    Order(int id, int customerId);

    int getId() const;
    int getCustomerId() const;
    std::vector<OrderItem> getItems() const;
    double getTotalAmount() const;

    void addItem(int itemId, const std::string& itemName, int quantity, double price);
    void removeItem(int itemId);
    void calculateTotal();
};
#pragma once
#include <string>
#include <vector>
#include "MenuItem.h"
#include "Customer.h"
#include "Order.h"

class Database {
public:
    static void saveMenu(const std::vector<MenuItem>& items, const std::string& filePath);
    static std::vector<MenuItem> loadMenu(const std::string& filePath);

    static void saveCustomers(const std::vector<Customer>& customers, const std::string& filePath);
    static std::vector<Customer> loadCustomers(const std::string& filePath);

    static void saveOrders(const std::vector<Order>& orders, const std::string& filePath);
    static std::vector<Order> loadOrders(const std::string& filePath);
};
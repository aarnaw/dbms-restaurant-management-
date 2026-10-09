#include "Database.h"
#include <fstream>
#include <sstream>

void Database::saveMenu(const std::vector<MenuItem>& items, const std::string& filePath) {
    std::ofstream out(filePath);
    for (const auto& item : items) {
        out << item.getId() << ","
            << item.getName() << ","
            << item.getPrice() << ","
            << item.getCategory() << "\n";
    }
}

std::vector<MenuItem> Database::loadMenu(const std::string& filePath) {
    std::vector<MenuItem> items;
    std::ifstream in(filePath);
    std::string line;

    while (std::getline(in, line)) {
        if (line.empty()) continue;

        std::stringstream ss(line);
        std::string token;
        std::vector<std::string> fields;

        while (std::getline(ss, token, ',')) {
            fields.push_back(token);
        }

        if (fields.size() >= 4) {
            MenuItem item(
                std::stoi(fields[0]),
                fields[1],
                std::stod(fields[2]),
                fields[3]
            );
            items.push_back(item);
        }
    }

    return items;
}

void Database::saveCustomers(const std::vector<Customer>& customers, const std::string& filePath) {
    std::ofstream out(filePath);
    for (const auto& customer : customers) {
        out << customer.getId() << ","
            << customer.getName() << ","
            << customer.getPhone() << ","
            << customer.getAddress() << "\n";
    }
}

std::vector<Customer> Database::loadCustomers(const std::string& filePath) {
    std::vector<Customer> customers;
    std::ifstream in(filePath);
    std::string line;

    while (std::getline(in, line)) {
        if (line.empty()) continue;

        std::stringstream ss(line);
        std::string token;
        std::vector<std::string> fields;

        while (std::getline(ss, token, ',')) {
            fields.push_back(token);
        }

        if (fields.size() >= 4) {
            Customer customer(
                std::stoi(fields[0]),
                fields[1],
                fields[2],
                fields[3]
            );
            customers.push_back(customer);
        }
    }

    return customers;
}

void Database::saveOrders(const std::vector<Order>& orders, const std::string& filePath) {
    std::ofstream out(filePath);
    for (const auto& order : orders) {
        out << order.getId() << "," << order.getCustomerId() << "," << order.getTotalAmount() << "\n";
    }
}

std::vector<Order> Database::loadOrders(const std::string& filePath) {
    std::vector<Order> orders;
    std::ifstream in(filePath);
    std::string line;

    while (std::getline(in, line)) {
        if (line.empty()) continue;

        std::stringstream ss(line);
        std::string token;
        std::vector<std::string> fields;

        while (std::getline(ss, token, ',')) {
            fields.push_back(token);
        }

        if (fields.size() >= 3) {
            Order order(std::stoi(fields[0]), std::stoi(fields[1]));
            order.calculateTotal();
            orders.push_back(order);
        }
    }

    return orders;
}
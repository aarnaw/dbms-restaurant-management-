#pragma once
#include <string>

class MenuItem {
private:
    int id;
    std::string name;
    double price;
    std::string category;

public:
    MenuItem();
    MenuItem(int id, const std::string& name, double price, const std::string& category);

    int getId() const;
    std::string getName() const;
    double getPrice() const;
    std::string getCategory() const;

    void setId(int id);
    void setName(const std::string& name);
    void setPrice(double price);
    void setCategory(const std::string& category);
};
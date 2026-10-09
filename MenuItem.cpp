#include "MenuItem.h"

MenuItem::MenuItem() : id(0), name(""), price(0.0), category("") {}

MenuItem::MenuItem(int id, const std::string& name, double price, const std::string& category)
    : id(id), name(name), price(price), category(category) {}

int MenuItem::getId() const { return id; }
std::string MenuItem::getName() const { return name; }
double MenuItem::getPrice() const { return price; }
std::string MenuItem::getCategory() const { return category; }

void MenuItem::setId(int id) { this->id = id; }
void MenuItem::setName(const std::string& name) { this->name = name; }
void MenuItem::setPrice(double price) { this->price = price; }
void MenuItem::setCategory(const std::string& category) { this->category = category; }
#include "Customer.h"

Customer::Customer() : id(0), name(""), phone(""), address("") {}

Customer::Customer(int id, const std::string& name, const std::string& phone, const std::string& address)
    : id(id), name(name), phone(phone), address(address) {}

int Customer::getId() const { return id; }
std::string Customer::getName() const { return name; }
std::string Customer::getPhone() const { return phone; }
std::string Customer::getAddress() const { return address; }

void Customer::setId(int id) { this->id = id; }
void Customer::setName(const std::string& name) { this->name = name; }
void Customer::setPhone(const std::string& phone) { this->phone = phone; }
void Customer::setAddress(const std::string& address) { this->address = address; }
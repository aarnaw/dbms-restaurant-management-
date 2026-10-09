#pragma once
#include <string>

class Customer {
private:
    int id;
    std::string name;
    std::string phone;
    std::string address;

public:
    Customer();
    Customer(int id, const std::string& name, const std::string& phone, const std::string& address);

    int getId() const;
    std::string getName() const;
    std::string getPhone() const;
    std::string getAddress() const;

    void setId(int id);
    void setName(const std::string& name);
    void setPhone(const std::string& phone);
    void setAddress(const std::string& address);
};
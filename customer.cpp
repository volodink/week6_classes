#include "customer.h"

std::ostream &operator<<(std::ostream &os, const Customer &customer) {
    os << "(id: " << customer.id << " name: " << customer.name << " tier: " << customer.tier << ")";
    return os;
}

long Customer::getId() const {
    return id;
}

void Customer::setId(long id) {
    Customer::id = id;
}

const std::string &Customer::getName() const {
    return name;
}

void Customer::setName(const std::string &name) {
    Customer::name = name;
}

int Customer::getTier() const {
    return tier;
}

void Customer::setTier(int tier) {
    Customer::tier = tier;
}

Customer::Customer(long id) : id(id) {}

Customer::Customer() = default;

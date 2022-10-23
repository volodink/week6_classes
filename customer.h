//
// Created by user on 23.10.2022.
//

#ifndef UNTITLEDCLASSES_CUSTOMER_H
#define UNTITLEDCLASSES_CUSTOMER_H

#include <string>
#include <ostream>
#include <utility>

class Customer {
private:
    long id = 0;
    std::string name = "untitled";
    int tier = 0;
public:
    Customer(long id, std::string name, int tier) : id(id), name(std::move(name)), tier(tier) {}

    explicit Customer(long id);

    Customer();

    friend std::ostream &operator<<(std::ostream &os, const Customer &customer);

    long getId() const;

    void setId(long id);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getTier() const;

    void setTier(int tier);
};

#endif //UNTITLEDCLASSES_CUSTOMER_H

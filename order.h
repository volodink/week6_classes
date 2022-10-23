//
// Created by user on 23.10.2022.
//

#ifndef UNTITLEDCLASSES_ORDER_H
#define UNTITLEDCLASSES_ORDER_H


#include <ctime>
#include <set>
#include <ostream>
#include "customer.h"
#include "product.h"

class Order {
public:
    Order(long id,
          time_t orderDate,
          time_t deliveryDate,
          std::string status,
          Customer customer,
          std::set<Product> products);

    explicit Order(long id);

private:
    long id = 0;
public:
    long getId() const;

    void setId(long id);

    time_t getOrderDate() const;

    void setOrderDate(time_t orderDate);

    time_t getDeliveryDate() const;

    void setDeliveryDate(time_t deliveryDate);

    const std::string &getStatus() const;

    void setStatus(const std::string &status);

    const Customer &getCustomer() const;

    void setCustomer(const Customer &customer);

    const std::set<Product> &getProducts() const;

    void setProducts(const std::set<Product> &products);

    friend std::ostream &operator<<(std::ostream &os, const Order &order);

private:
    time_t orderDate = 0;
    time_t deliveryDate = 0;
    std::string status = "empty";
    Customer customer;
    std::set<Product> products;
};


#endif //UNTITLEDCLASSES_ORDER_H

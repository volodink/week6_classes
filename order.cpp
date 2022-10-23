//
// Created by user on 23.10.2022.
//

#include <numeric>
#include <iterator>
#include <utility>
#include "sstream"
#include "order.h"

Order::Order(long id, time_t orderDate, time_t deliveryDate, std::string status, Customer customer,
             std::set<Product> products) : id(id), orderDate(orderDate), deliveryDate(deliveryDate),
                                                  status(std::move(status)), customer(std::move(customer)), products(std::move(products)) {}

long Order::getId() const {
    return id;
}

void Order::setId(long id) {
    Order::id = id;
}

time_t Order::getOrderDate() const {
    return orderDate;
}

void Order::setOrderDate(time_t orderDate) {
    Order::orderDate = orderDate;
}

time_t Order::getDeliveryDate() const {
    return deliveryDate;
}

void Order::setDeliveryDate(time_t deliveryDate) {
    Order::deliveryDate = deliveryDate;
}

const std::string &Order::getStatus() const {
    return status;
}

void Order::setStatus(const std::string &status) {
    Order::status = status;
}

const Customer &Order::getCustomer() const {
    return customer;
}

void Order::setCustomer(const Customer &customer) {
    Order::customer = customer;
}

const std::set<Product> &Order::getProducts() const {
    return products;
}

void Order::setProducts(const std::set<Product> &products) {
    Order::products = products;
}

std::ostream &operator<<(std::ostream &os, const Order &order) {
    std::string result;
    for (const auto & iter : order.getProducts())
    {
        result += "(id=" + std::to_string(iter.getId())
                      + ", name=" + iter.getName()
                      + ", category=" + iter.getCategory()
                      + ", price=" + std::to_string(iter.getPrice())
                      + ")";
    }
    os << "(id=" << order.id << ", orderDate=" << order.orderDate << ", deliveryDate=" << order.deliveryDate
       << ", status=" << order.status << ", customer=" << order.customer << ", products=(" << result << "))";
    return os;
}

Order::Order(long id) : id(id) {}


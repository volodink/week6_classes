//
// Created by user on 23.10.2022.
//

#ifndef UNTITLEDCLASSES_CATEGORY_H
#define UNTITLEDCLASSES_CATEGORY_H

#include <string>
#include <ostream>

class Product : public std::basic_string<char> {
public:
    explicit Product(long id);

    Product(long id, std::string name, std::string category, double price);

    long getId() const;

    void setId(long id);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getCategory() const;

    void setCategory(const std::string &category);

    double getPrice() const;

    void setPrice(double price);

    friend std::ostream &operator<<(std::ostream &os, const Product &product);

    friend bool operator<(const Product &lhs, const Product &rhs);

    friend bool operator>(const Product &lhs, const Product &rhs);

    friend bool operator<=(const Product &lhs, const Product &rhs);

    friend bool operator>=(const Product &lhs, const Product &rhs);

private:
    long id = 0;
    std::string name = "empty";
    std::string category = "empty";
    double price = 0.0;
};

#endif //UNTITLEDCLASSES_CATEGORY_H

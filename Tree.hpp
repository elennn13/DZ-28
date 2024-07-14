#pragma once

struct Tree {
    std::string fruit;
    int fruits_number;
    int fruits_price;

    Tree(const std::string& fruit, int fruits_number, int fruits_price)
        : fruit(fruit), fruits_number(fruits_number), fruits_price(fruits_price) {}

    void print_tree() const;
    int full_price() const;
    int collect(int fruits_to_collect);
};
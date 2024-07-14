#include <iostream>
#include "Tree.hpp"

void Tree::print_tree() const {
    std::cout << "Название плодов: " << fruit << std::endl;
    std::cout << "Количество плодов: " << fruits_number << std::endl;
    std::cout << "Цена за один плод: " << fruits_price << " руб." << std::endl;
}

int Tree::full_price() const {
    return fruits_number * fruits_price;
}

int Tree::collect(int fruits_to_collect) {
    // Проверяем, достаточно ли плодов на дереве
    if (fruits_to_collect > fruits_number) {
        std::cout << "Нельзя собрать больше плодов, чем есть на дереве!" << std::endl;
        return 0;
    }

    // Собираем плоды
    fruits_number -= fruits_to_collect;

    // Возвращаем сумму, на которую можно продать собранные плоды
    return fruits_to_collect * fruits_price;
}
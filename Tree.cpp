#include <iostream>
#include "Tree.hpp"

void Tree::print_tree() const {
    std::cout << "�������� ������: " << fruit << std::endl;
    std::cout << "���������� ������: " << fruits_number << std::endl;
    std::cout << "���� �� ���� ����: " << fruits_price << " ���." << std::endl;
}

int Tree::full_price() const {
    return fruits_number * fruits_price;
}

int Tree::collect(int fruits_to_collect) {
    // ���������, ���������� �� ������ �� ������
    if (fruits_to_collect > fruits_number) {
        std::cout << "������ ������� ������ ������, ��� ���� �� ������!" << std::endl;
        return 0;
    }

    // �������� �����
    fruits_number -= fruits_to_collect;

    // ���������� �����, �� ������� ����� ������� ��������� �����
    return fruits_to_collect * fruits_price;
}
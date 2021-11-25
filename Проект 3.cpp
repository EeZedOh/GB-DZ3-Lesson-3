#include <iostream>
#include <vector>
#include "SArray.hpp"
#include "Util.h"
#include "Matrix.hpp"


const size_t VECTOR_SIZE = 5;

template<typename T>
void AddMean(std::vector<T>& v, size_t size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += v.at(i);
    }
    v.push_back(sum / float(size));
}

void Task1() {
    std::vector<float> vf;
    vf.reserve(VECTOR_SIZE + 1);
    for (int i = 0; i < VECTOR_SIZE; i++) {
        float num = float(getRandomNum(1, 100)) / 100 + float(getRandomNum(1, 100));
        vf.push_back(num);
        std::cout << vf.at(i) << '\t';
    }
    std::cout << std::endl;
    AddMean(vf, VECTOR_SIZE);
    std::cout << "Mean:" << vf.at(VECTOR_SIZE) << std::endl;
    for (int i = 0; i < VECTOR_SIZE + 1; i++) {
        std::cout << vf.at(i) << '\t';
    }
    std::cout << std::endl;
}

void Task2() {
    Matrix<float> m(VECTOR_SIZE);
    m.Print();
    std::cout << "Determinant:" << m.GaussDeterminant() << std::endl;
}

void Task3() {
    SimpleArray<int> sa(13);
    for (auto item : sa) {
        std::cout << item << '\t';
    }
    std::cout << std::endl;
}

int main() {
    /**
     * Dz1
     * Написать функцию, добавляющую в конец списка вещественных чисел элемент,
     * значение которого равно среднему арифметическому всех его элементов.
     */
    Task1();
    std::cout << std::endl;

    /**
     * Dz2
     * Создать класс, представляющий матрицу. Реализовать в нем метод, вычисляющий определитель матрицы.
     */
    Task2();
    std::cout << std::endl;

    /**
     * Dz3
     * Реализовать собственный класс итератора,
     * с помощью которого можно будет проитерироваться по диапазону целых чисел в цикле for-range-based.
     */
    Task3();

    return 0;
}

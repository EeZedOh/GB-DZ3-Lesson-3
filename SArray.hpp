#pragma once
#include "Iter.hpp"
#include "Util.h"

template<class T>
class SimpleArray {
    T* data;
    size_t size;
public:
    explicit SimpleArray(size_t size) : size(size) {
        data = new T[size];
        for (int i = 0; i < size; i++) {
            data[i] = T(getRandomNum(0, 100));
        }
    };

    ~SimpleArray() {
        delete[] data;
    };

    Iterator<T> begin() {
        return Iterator(data);
    };

    Iterator<T> end() {
        return Iterator(data + size);
    };
};

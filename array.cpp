#pragma once
#include "array.h"

array::array() {
    size = 10;
    count = 0;
    arr = new int [size];
};

array::array(int size) {
    size = size;
    count = 0;
    arr = new int[size];
};

void array::resize() {
    int new_size = size * 2;
    int* new_array = new int [new_size];
    std::memcpy(new_array, arr, count * sizeof(int));
    delete[] arr;
    arr = new_array;
    size = new_size;
};

 void array::append(int & elem){
    if (count == size) resize();
    arr[count++] = elem;
 };

int array::GetMax() const  {
    int x = arr[0];
    for (int i = 1; i < count; i++) {
        if (x < arr[i]) x = arr[i];
    }
    return x;
};

int array::GetMin() const {
    int x = arr[0];
    for (int i = 1; i < count; i++) {
        if (x > arr[i]) x = arr[i];
    }
    return x;
};

bool array::FindElem(int& elem) const {
    for (int i = 0; i < count; i++) {
        if (elem == arr[i]) return true;
    }
    return false;
};

array::~array() {
    delete[] arr;
};
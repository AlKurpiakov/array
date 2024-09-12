#pragma once
#include <iostream>
class array{
private:
    int* arr;
    int size;
    int count;
    int _max;
    int _min;
    void resize();

public:

    array();
    array(int size);

    void append(int & elem);
    bool FindElem(int& elem) const;
    int GetMax() const;
    int GetMin() const;

    ~array();
};
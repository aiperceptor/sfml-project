#pragma once
#include <iostream>

using std::cout;
using std::endl;

template<typename T>
class Vec
{
    T x;
    T y;
public:
    Vec(T xin, T yin) : x {xin}, y {yin} {}
    
    void display()
    {
        cout << x << ", " << y << endl;
    }
};

using Vecf = Vec<float>;

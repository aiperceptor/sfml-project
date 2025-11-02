#pragma once

// #include <SFML/Graphics.hpp>
#include <math.h>

template<typename T>
class Vec2
{
public:
    T x, y {0};

    Vec2() = default;
    Vec2(T xin, T yin) : x {xin}, y {yin}
    { }

    // constructor to convert from sf:Vector2
    // Vec2(sf::Vector2<T>& vector) : x {vector.x}, y {vector.y}
    // { }

    // Vec2(sf::Vector2i& vector) : x {T(vector.x)}, y {T(vector.y)}
    // { }

    // allow automatic conversion to sf:Vector2
    // this let us pass Vec2 into sfml functions
    // operator sf::Vector2<T>&()
    // {
    //     return sf::Vector2<T>(x, y);
    // }

    bool operator == (const Vec2& rhs) const
    {
        return (x == rhs.x && y == rhs.y);
    }

    bool operator != (const Vec2& rhs) const
    {
        return (x != rhs.x || y != rhs.y);
    }

    Vec2 operator + (const Vec2& rhs)
    {
        return Vec2(x + rhs.x, y + rhs.y);
    }

    Vec2 operator - (const Vec2& rhs)
    {
        return Vec2(x - rhs.x, y - rhs.y);
    }

    Vec2 operator * (T value)
    {
        return Vec2(x * value, y * value);
    }

    Vec2 operator / (T value)
    {
        return Vec2(x / value, y / value);
    }

    Vec2 operator += (const Vec2& rhs)
    {
        return Vec2(x + rhs.x, y + rhs.y);
    }

    Vec2 operator -= (const Vec2& rhs)
    {
        return Vec2k(x - rhs.x, y - rhs.y);
    }

    float dist(const Vec2<T>& rhs) const
    {

    }

    float length(const Vec2<T>& rhs) const
    {

    }

    void normalize(const Vec2<T>& rhs)
    {

    }
};

using Vec2f = Vec2<float>;
using Vec2i = Vec2<int>;

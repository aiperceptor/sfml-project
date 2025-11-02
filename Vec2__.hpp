#pragma once

#include <SFML/Graphics.hpp>
#include <math.h>

template<typename T>
class Vec2
{
public:
    T x, y {0};

    Vec2() = default;
    Vec2(T xin, T yin);

    // constructor to convert from sf:Vector2
    Vec2(sf::Vector2<T>& vector);
    Vec2(sf::Vector2i& vector);

    // allow automatic conversion to sf:Vector2
    // this let us pass Vec2 into sfml functions
    // operator sf::Vector2<T>&();
    bool operator == (const Vec2& rhs) const;
    bool operator != (const Vec2& rhs) const;
    Vec2 operator + (const Vec2& rhs);
    Vec2 operator - (const Vec2& rhs);
    Vec2 operator * (T value);
    Vec2 operator / (T value);
    Vec2 operator += (const Vec2& rhs);
    Vec2 operator -= (const Vec2& rhs);

    float dist(const Vec2<T>& rhs) const;
    float length(const Vec2<T>& rhs) const;
    void normalize(const Vec2<T>& rhs);
};

using Vec2f = Vec2<float>;
using Vec2i = Vec2<int>;
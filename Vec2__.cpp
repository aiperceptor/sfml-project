#include "Vec2.hpp"


template<typename T>
Vec2<T>::Vec2(T xin, T yin) : x {xin}, y {yin}
{

}

template<typename T>
Vec2<T>::Vec2(sf::Vector2<T>& vector) : x {vector.x}, y {vector.y}
{

}

template<typename T>
Vec2<T>::Vec2(sf::Vector2i& vector) : x {T(vector.x)}, y {T(vector.y)}
{

}

// template<typename T>
// Vec2<T>::operator sf::Vector2<T>&()
// {
//     return sf::Vector2<T>(x, y);
// }

template<typename T>
bool Vec2<T>::operator == (const Vec2& rhs) const
{
    return (x == rhs.x && y == rhs.y);
}

template<typename T>
bool Vec2<T>::operator != (const Vec2& rhs) const
{
    return (x != rhs.x || y != rhs.y);
}

template<typename T>
Vec2<T> Vec2<T>::operator + (const Vec2& rhs)
{
    return Vec2(x + rhs.x, y + rhs.y);
}

template<typename T>
Vec2<T> Vec2<T>::operator - (const Vec2& rhs)
{
    return Vec2(x - rhs.x, y - rhs.y);
}

template<typename T>
Vec2<T> Vec2<T>::operator * (T value)
{
    return Vec2(x * value, y * value);
}

template<typename T>
Vec2<T> Vec2<T>::operator / (T value)
{
    return Vec2(x / value, y / value);
}

template<typename T>
Vec2<T> Vec2<T>::operator += (const Vec2& rhs)
{
    return Vec2(x + rhs.x, y + rhs.y);
}

template<typename T>
Vec2<T> Vec2<T>::operator -= (const Vec2& rhs)
{
    return Vec2k(x - rhs.x, y - rhs.y);
}

template<typename T>
float Vec2<T>::dist(const Vec2<T>& rhs) const
{

}

template<typename T>
float Vec2<T>::length(const Vec2<T>& rhs) const
{

}

template<typename T>
void Vec2<T>::normalize(const Vec2<T>& rhs)
{

}

#pragma once
#include <SFML/Graphics.hpp>
#include <tuple>
#include "Vec2.hpp"

class Component
{
public:
    bool exists {false};
};

class CTransform : public Component
{
public:
    Vec2f position {0.0, 0.0};
    Vec2f velocity {0.0, 0.0};
    float angle {0};

    CTransform() = default;
    CTransform(Vec2f pos, Vec2f vel, float a);
};

class CShape : public Component
{
public:
    sf::CircleShape circle {};

    CShape() = default;
    CShape(float radius, size_t points, const sf::Color& fill, const sf::Color& outlineColor, float outlineThickness);
};

class CCollision : public Component
{
public:
    float radius {0};

    CCollision() = default;
    CCollision(float r);
};

class CScore : public Component
{
public:
    int score {0};

    CScore() = default;
    CScore(int s);
};

class CLifeSpan : public Component
{
    int lifeSpan {0};
    int remaining {0};

    CLifeSpan() = default;
    CLifeSpan(int totalLifeSpan);
};

class CInput : public Component
{
public:
    bool up {false};
    bool down {false};
    bool right {false};
    bool left {false};
    bool shoot {false};

    CInput() = default;
};

// enum ComponentTag
// {
//     tranform,
//     shape
// };

using ComponentTuple = std::tuple<CTransform, CShape>;
// using ComponentTuple = std::tuple<CTransform, CShape, CCollision, CScore, CLifeSpan, CInput>;


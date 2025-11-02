#include "Components.hpp"



CTransform::CTransform(Vec2f pos, Vec2f vel, float a) : position {pos}, velocity {vel}, angle {a}
{

}


CShape::CShape(float radius, size_t points, const sf::Color& fill, const sf::Color& outlineColor, float outlineThickness)
    : circle(radius, points)
{
    circle.setFillColor(fill);
    circle.setOutlineColor(outlineColor);
    circle.setOutlineThickness(outlineThickness);
    circle.setOrigin({radius, radius});
}

 
CCollision::CCollision(float r) : radius {r}
 {

 }


CScore::CScore(int s) : score {s}
{

}


CLifeSpan::CLifeSpan(int totalLifeSpan) : lifeSpan {totalLifeSpan}, remaining {totalLifeSpan}
{
    
}
#pragma once
#include "Components.hpp"
#include <string>

class EntityManager;

class Entity
{
    friend EntityManager;

    ComponenetTuple m_components;
    bool            m_alive;
    std::string     m_tag;
    size_t          m_id;

    Entity() = default;
    Entity(size_t, std::string);

public:
    template<typename T, typename... Targs>
    T& addComponent(Targs&&...);

    template<typename T>
    void removeComponent();

    template<typename T>
    bool hasComponent() const;

    template<typename T>
    Componenet& getComponent() const;


    const std::string& getTag() const;
    bool isAlive();
    void destroy();

};
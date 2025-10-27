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

    void addComponent();
    void removeComponent();
    bool hasComponent();
    Componenet& getComponent();
    ComponentTag getTag();
    bool isAlive();
    void destroy();

};
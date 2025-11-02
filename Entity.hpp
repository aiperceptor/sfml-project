#pragma once
#include "Components.hpp"
#include <string>

class EntityManager;

class Entity
{
    friend EntityManager;

    ComponentTuple m_components;
    bool            m_alive;
    std::string     m_tag;
    size_t          m_id;

    // Entity() = default;
    Entity(size_t, std::string);

public:
    template<typename T, typename... Targs>
    T& addComponent(Targs&&...);

    template<typename T>
    T& add()
    {
        auto& component = getComponent<T>();
        component.exists = true;
        return component;
    }

    template<typename T>
    void removeComponent();

    template<typename T>
    bool hasComponent() const;

    template<typename T>
    T& getComponent() const;


    const std::string& getTag() const;
    bool isAlive();
    void destroy();

};
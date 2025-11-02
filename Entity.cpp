#include "Entity.hpp"

Entity::Entity(size_t id, std::string tag) : m_id {id}, m_tag {tag}
{

}

template<typename T, typename... Targs>
T& Entity::addComponent(Targs&&... mArgs)
{
    auto& component = getComponent<T>();
    component = T(std::forward<Targs>(mArgs)...);
    component.exists = true;
    return component;
}

// template<typename T>
// T& Entity::add()
// {
//     auto& component = getComponent<T>();
//     component.exists = true;
//     return component;
// }

template<typename T>
void Entity::removeComponent()
{
    getComponent<T>() = T();
}

template<typename T>
bool Entity::hasComponent() const
{
    return std::get<T>(m_components).exists;
}

template<typename T>
T& Entity::getComponent() const
{
    return std::get<T>(m_components);
}

const std::string& Entity::getTag() const
{
    return m_tag;
}

bool Entity::isAlive()
{
    return m_alive;
}

void Entity::destroy()
{
    m_alive = false;
}


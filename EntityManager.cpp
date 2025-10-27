#include "EntityManager.hpp"

EntityManager::EntityManager()
{
    std::cout << "EntityManager constructor" << std::endl;
    auto e = addEntity("Player");
    
}

void EntityManager::removeDeadEntities(EntityVec& entities)
{

}

void EntityManager::update()
{

}
    
std::shared_ptr<Entity> EntityManager::addEntity(const std::string& tag)
{
    auto entity = std::shared_ptr<Entity>(new Entity(m_totalEntities++, tag));
    m_toAdd.push_back(entity);
    return entity;
}
    const EntityVec& getEntities();
    const EntityVec& getEntities(std::string&& tag);
    const EntityMap& getEntityMap();
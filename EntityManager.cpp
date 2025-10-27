#include "EntityManager.hpp"

EntityManager::EntityManager()
{
    // std::cout << "EntityManager constructor" << std::endl;
    // auto e = addEntity("Player");
    
}

void EntityManager::removeDeadEntities(EntityVec& entities)
{
        for (auto e : m_entities)
        {
            m_entities.erase(std::remove_if(m_entities.begin(), 
                                            m_entities.end(), 
                                            [](const std::shared_ptr<Entity>& e){return !e->isAlive();}), 
                            m_entities.end());
        }
}

void EntityManager::update()
{
    for (auto e : m_toAdd)
    {
        m_entities.push_back(e);
        m_entityMap[e->getTag()].push_back(e);
    }

    m_toAdd.clear();

    removeDeadEntities(m_entities);

    // remove dead entities from each vector in the entity map
    // C++20 way of iterating through [key,value] pais in a map
    for (auto& [tag, entityVec] : m_entityMap)
    {
        removeDeadEntities(entityVec);
    }
}
    
std::shared_ptr<Entity> EntityManager::addEntity(const std::string& tag)
{
    auto entity = std::shared_ptr<Entity>(new Entity(m_totalEntities++, tag));
    m_toAdd.push_back(entity);
    return entity;
}
    
const EntityVec& EntityManager::getEntities()
{
    return m_entities;
}
    
const EntityVec& EntityManager::getEntities(std::string&& tag)
{
    return m_entityMap[tag];
}
    
const EntityMap& EntityManager::getEntityMap()
{
    return m_entityMap;
}
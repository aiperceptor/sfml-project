#pragma once
#include <vector>
#include <map>
#include <memory>
#include <iostream>

#include "Entity.hpp"


using EntityVec = std::vector<std::shared_ptr<Entity>>;
using EntityMap = std::map<std::string, EntityVec>;

class EntityManager
{
    EntityVec m_entities;
    EntityVec m_toAdd;
    EntityMap m_etityMap;
    size_t m_totalEntities {0};

    void removeDeadEntities(EntityVec&);

public:
    EntityManager();
    void update();
    std::shared_ptr<Entity> addEntity(const std::string& tag);
    const EntityVec& getEntities();
    const EntityVec& getEntities(std::string&& tag);
    const EntityMap& getEntityMap();
};
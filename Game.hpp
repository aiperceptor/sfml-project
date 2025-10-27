#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "EntityManager.hpp"

class Game
{
    sf::Window m_window;
    sf::Font m_font;
    // sf::Text m_text;

    EntityManager m_entityManager;

public:
    Game();

    void init();

    void run();

};
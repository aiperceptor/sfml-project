#include "Game.hpp"

Game::Game()
{
    init();
}

void Game::init()
{
    m_window.create(sf::VideoMode({800, 600}), "My window");
}

void Game::run()
{
    std::cout << "Running...." << std::endl;

    // sf::Window window(sf::VideoMode({800, 600}), "My window");

    // run the program as long as the window is open
    while (m_window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = m_window.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>())
                m_window.close();
        }
        // m_window.display();
    }
}
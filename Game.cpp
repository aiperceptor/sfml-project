#include "Game.hpp"

Game::Game()
{
    readConfigFile();
    init();
}

void Game::init()
{
    // create window
    if (m_windowConfig.isFullscreen)
    {
        m_window.create(sf::VideoMode({m_windowConfig.width, m_windowConfig.width}), "Assignment-2", sf::State::Fullscreen);
    }
    else
    {
        m_window.create(sf::VideoMode({m_windowConfig.width, m_windowConfig.height}), "Assignment-2", sf::State::Windowed);
    }
    
    m_window.setFramerateLimit(m_windowConfig.frameLimit);
    m_window.setKeyRepeatEnabled(false);
}

void Game::readConfigFile()
{
    std::ifstream fin(CONFIG_FILE);
    std::string line;

    while (std::getline(fin, line, '\n'))
    {
        std::istringstream ss(line);
        std::string type;
        ss >> type;

        if (type == "Window")
        {
            ss >> m_windowConfig.width >> m_windowConfig.height >> m_windowConfig.frameLimit >> m_windowConfig.isFullscreen;
        }
        else if (type == "Font")
        {
            ss >> m_fontConfig.name >> m_fontConfig.r >> m_fontConfig.g >> m_fontConfig.b;
        }
        else if (type == "Player")
        {
            ss >> m_playerConfig.SR >> m_playerConfig.CR >> m_playerConfig.S;
            ss >> m_playerConfig.FR >> m_playerConfig.FG >> m_playerConfig.FB;
            ss >> m_playerConfig.OR >> m_playerConfig.OG >> m_playerConfig.OB;
            ss >> m_playerConfig.OT >> m_playerConfig.V;
        }
        else if (type == "Enemy")
        {
            ss >> m_enemyConfig.SR >> m_enemyConfig.CR >> m_enemyConfig.SMIN >> m_enemyConfig.SMAX;
            ss >> m_enemyConfig.OR >> m_enemyConfig.OG >> m_enemyConfig.OB;
            ss >> m_enemyConfig.OT;
            ss >> m_enemyConfig.VMIN >> m_enemyConfig.VMAX >> m_enemyConfig.L >> m_enemyConfig.SI;
        }
        else if (type == "Bullet")
        {
            ss >> m_bulletConfig.SR >> m_bulletConfig.CR >> m_bulletConfig.S;
            ss >> m_bulletConfig.FR >> m_bulletConfig.FG >> m_bulletConfig.FB;
            ss >> m_bulletConfig.OR >> m_bulletConfig.OG >> m_bulletConfig.OB;
            ss >> m_bulletConfig.OT >> m_bulletConfig.V >> m_bulletConfig.L;
        }
    }
}

void Game::run()
{
    std::cout << "Running...." << std::endl;

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
    }
}

void Game::setPaused(bool paused)
{

}

void Game::sMovement()
{

}
    
void Game::sUserInput()
{

}
    
void Game::sLifeSpan()
{

}
    
void Game::sRender()
{

}
    
void Game::sEnemySpawner()
{

}
    
void Game::sCollision()
{

}

void Game::spawnPlayer()
{

}
    
void Game::spawnEnemy()
{
    
}
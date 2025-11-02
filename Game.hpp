#pragma once
#include <iostream>
#include <fstream>
#include <SFML/Graphics.hpp>
#include "EntityManager.hpp"
#include "Entity.hpp"
#include "Components.hpp"
#include "Vec2.hpp"

struct WindowConfig { u_int width, height, frameLimit; bool isFullscreen;};
struct Font { std::string name; int size, r, g, b; };
struct PlayerConfig { int SR, CR, FR, FG, FB, OR, OG, OB, OT, V; float S;};
struct EnemyConfig { int SR, CR, OR, OG, OB, OT, VMIN, VMAX, L, SI; float SMIN, SMAX; };
struct BulletConfig { int SR, CR, FR, FG, FB, OR, OG, OB, OT, V, L; float S; };

class Game
{
    const std::string CONFIG_FILE = "../config.txt";
    sf::Window      m_window;
    sf::Font        m_font;
    // sf::Text m_text;
    EntityManager   m_entityManager;

    WindowConfig    m_windowConfig;
    Font            m_fontConfig;
    PlayerConfig    m_playerConfig;
    EnemyConfig     m_enemyConfig;
    BulletConfig    m_bulletConfig;

    sf::Clock deltaClock;
    int m_score {0};
    int m_currentFrame {0};
    int m_lastEnemySpawnTime {0};
    bool m_paused {false};

    void readConfigFile();
    void init();
    void setPaused(bool paused);

    // game systems
    void sMovement();
    void sUserInput();
    void sLifeSpan();
    void sRender();
    void sEnemySpawner();
    void sCollision();

    void spawnPlayer();
    void spawnEnemy();

public:
    Game();
    void run();
};
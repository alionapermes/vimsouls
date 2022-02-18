#pragma once

#include <string_view>

#include "SFML/Graphics.hpp"
#include "SFML/System/NonCopyable.hpp"

#include "character.hpp"


class Game : sf::NonCopyable
{
public:
    Game(uint32_t w, uint32_t h, std::string_view title);

    void run();

private:
    sf::RenderWindow _window;
    Character _player;

    void processEvents();
    void update();
    void render();
};


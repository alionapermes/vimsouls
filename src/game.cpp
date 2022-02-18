#include "game.hpp"


Game::Game(uint32_t w, uint32_t h, std::string_view title)
    : _window(sf::VideoMode(w, h), sf::String(title.data()))
{
    _player.setTexture("../texture/vim-logo-545x545.png", true);
}

void
Game::run()
{
    while (_window.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void
Game::processEvents()
{
    sf::Event event;

    while (_window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            _window.close();
    }
}

void
Game::update()
{
    //
}

void
Game::render()
{
    _window.clear();
    _window.draw(_player.getSprite());
    _window.display();
}


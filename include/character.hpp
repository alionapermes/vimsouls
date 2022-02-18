#pragma once

#include <string_view>

#include "SFML/Graphics.hpp"
#include "SFML/System/NonCopyable.hpp"


class  Character : sf::NonCopyable
{
public:
    Character() = default;

    void setTexture(std::string_view path, bool updateSprite = false);

    const sf::Sprite& getSprite() const;

private:
    sf::Texture _texture;
    sf::Sprite _sprite;
};


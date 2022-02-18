#include "character.hpp"


void
Character::setTexture(std::string_view path, bool updateSprite)
{
    _texture.loadFromFile(path.data());

    if (updateSprite)
        _sprite.setTexture(_texture);
}

const sf::Sprite&
Character::getSprite() const
{ return _sprite; }


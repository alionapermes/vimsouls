#include <SFML/Graphics.hpp>


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "VimSouls");

    sf::Texture vim_logo;
    if (!vim_logo.loadFromFile("../texture/vim-logo-545x545.png")) {
        return EXIT_FAILURE;
    }

    sf::Sprite sprite(vim_logo);
    

    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }

    return EXIT_SUCCESS;
}


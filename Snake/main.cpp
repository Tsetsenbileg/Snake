#include <sfml\Graphics.hpp>
using namespace sf; 
#define width 500 
#define height 500
int snakeWidth = 10, snakeHeight = 10; 
int main() {
    RenderWindow window(sf::VideoMode(width, height), "Welcome to snake game! ");
    RectangleShape rectangle(Vector2f(snakeWidth, snakeHeight));
    rectangle.setFillColor(Color::Red);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(rectangle);
        window.display();
    }
	return 0; 
}
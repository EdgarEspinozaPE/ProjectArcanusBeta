#include <SFML/Graphics.hpp>
#include "juego.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include "TileMap.h"
/*int main(){
    
    sf::RenderWindow window(sf::VideoMode(1920,1080), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
*/
int main()
{
    juego* Arcanus;
    Arcanus = new juego(800, 600, "Pruebas de Tilemap");
}
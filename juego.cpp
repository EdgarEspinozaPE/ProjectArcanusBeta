#include "juego.h"
#include<SFML/Graphics.hpp>
#include<iostream>
#include<sstream>
#include<fstream>
#include"TileMap.h"
juego::juego(int width, int high, std::string title)
{
	window = new sf::RenderWindow(sf::VideoMode(width, high), title);
	Map = new TileMap(20, 26, "TEXTURAS.jpg"); //El string pasado es la imagen con todas las texturas
	gameloop();
}
void juego::gameloop() 
{
	sf::Event sfEvent;
	while (window->isOpen())
	{
		updateElapsedTime();
		while (window->pollEvent(sfEvent)) { // Handles SFML's events
			if (sfEvent.type == sf::Event::Closed)
				window->close();
		}
		draw();
	}
}
void juego::draw()
{
	window->clear();
	Map->Displaytilemap(window);
	window->display();
}
void juego::updateElapsedTime() 
{
	fElapsedTime = sfElapsedTimeClock.restart().asSeconds();  
	system("cls");
	std::cout << fElapsedTime << "---" << 1 / fElapsedTime << "FPS/n";   //Esta parte muestra como van los fps
}
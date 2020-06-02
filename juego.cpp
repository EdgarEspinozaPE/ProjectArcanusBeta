#include "juego.h"
#include<SFML/Graphics.hpp>
#include<iostream>
#include<sstream>
#include<fstream>
#include"TileMap.h"
juego::juego(int ancho, int alto, std::string titulo)
{
	ventana = new RenderWindow(VideoMode(ancho, alto), titulo);
	shape = new CircleShape(100.f);
	text1 = new Texture;  
	text1->loadFromFile("Textura2.jpg");
	spr1 = new Sprite(*text1);
	shape->setFillColor(Color::Green);
	
	
	gameloop();
	
}
void juego::gameloop() 
{
	Event sfEvent;
	while (ventana->isOpen())
	{
		while (ventana->pollEvent(sfEvent)) { // Handles SFML's events
			if (sfEvent.type == Event::Closed)
				ventana->close();
		}
		dibujar();
	}
}
void juego::dibujar()
{
	ventana->clear();
	//Construir aqui el map get tile pa reccorrerlo:V
	TileMap* Mapa;
	Mapa = new TileMap(20,15,"Textura2.jpg");
	for (int i = 0;i < 20;i++) 
	{
		for (int j = 0;j < 15;j++)
		{
			ventana->draw(Mapa->GetTile(i,j));
		}
	}
	
	ventana->display();
}
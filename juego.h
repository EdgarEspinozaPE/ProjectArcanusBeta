#pragma once
#include<SFML/Graphics.hpp> 
#include<iostream>
#include<sstream>
#include<fstream>
#include"TileMap.h"
using namespace sf;
class juego
{
private:
	RenderWindow *ventana;
	CircleShape *shape;
	Texture * text1;
	Sprite * spr1;
public:	
	juego(int ancho, int alto, std::string titulo);
	void gameloop();
	void dibujar();
};


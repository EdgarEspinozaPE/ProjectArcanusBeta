#pragma once
#include<iostream>
#include<fstream>
#include<sstream>
#include<SFML/Graphics.hpp>
using namespace sf;
class TileMap
{
private:

	Texture *textura;
	Sprite* Tile;
	char** Mtile;
public:
	TileMap();
	TileMap(int filas, int columnas, std::string archivo);
	virtual ~TileMap();
	Sprite GetTile(int fila,int columna);
};


#include "TileMap.h"
#include<SFML/Graphics.hpp>
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
TileMap::TileMap(int filas, int columnas, std::string archivo)//FALTA QUE EL CONSTRUCTOR LEA DIRECTAMENTE DE UN TXT
{
	textura = new Texture;
	textura->loadFromFile(archivo);
	Tile = new Sprite;
	Mtile = new char* [filas];
	for (int i = 0;i < filas;i++)
	{
		Mtile[i] = new char[columnas];
	}
	for (int i = 0;i < filas;i++)
	{
		for (int j = 0;j < columnas;j++)
		{
			Mtile[i][j]='a';
		}
	}
}
TileMap::TileMap() {
	textura = new Texture;
	textura->loadFromFile("Textura2.jpg");
	Tile = new Sprite;
	Mtile = new char* [5];
	for (int i = 0;i < 5;i++)
	{
		Mtile[i] = new char[5];
	}
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			std::cin>>*(*(Mtile + i) + j);
		}
	}
}

TileMap::~TileMap() { delete textura; delete Tile; delete Mtile; }

Sprite TileMap::GetTile(int fila,int columna) 
{
	switch (*(*(Mtile+fila)+columna)) 
	{
		case 'a':
			Tile->setTexture(*textura);
			Tile->setScale(0.1f, 0.1f);
			Tile->setPosition(50 * fila, 50 * columna);
			break;
		case 'b':
			break;

	}
	return *Tile;
}

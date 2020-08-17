#pragma once
#include "SFML\Graphics.hpp"


using namesppace sf;
using namespace std;

class Bola
{	
	private:
	int color;
	Vector2i coordenadas;

	//SFML Atribbutes
	Texture* txtb;
	Sprite* bola;

	public:

	Bola(int c), Vector2i c;

	//SFML Metodos
	Sprite Dibujar();
	void procesarEventos();
	


};
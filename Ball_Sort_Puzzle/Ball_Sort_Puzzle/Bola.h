#pragma once
#include "SFML\Graphics.hpp"


using namesppace sf;
using namespace std;

class Bola
{	
	private:
	int color;

	//SFML Atribbutes
	Texture* txtb;
	Sprite* bola;

	public:

	Bola(int c);

	//SFML Metodos
	Sprite Dibujar();
	void procesarEventos();
	


};
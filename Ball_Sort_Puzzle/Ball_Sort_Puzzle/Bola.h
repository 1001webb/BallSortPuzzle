#pragma once
#include "SFML\Graphics.hpp"



using namespace std;

//Bola.h

using namesppace sf;

class Bola
{	
	private:
	int color;

	//SFML Atribbutes
	Texture* txtb;
	Sprite* bola;

	public:
	Bola(int c);
	insertarPelota();

	//SFML Metodos
	Sprite Dibujar();
	void procesarEventos();
	


};
#include <iostream>
#include <cstdlib>
#include "SFML/Graphics.hpp"

using namespace sf;

class Bola {

};

struct pila {
	Bola pelota;
	struct pila* sig;
}*primero = NULL;

void insertarBola(Bola pelota) 
{
	pila *nuevo = (pila*)malloc(sizeof(pila));
	nuevo->pelota = pelota;
	nuevo->sig = primero;
	primero = nuevo;
}

class Tubo_Ensayo
{
private:
	Texture *txtT;
	Sprite* sptT;
public:
	void dibujarTubo()
	{

	}
};
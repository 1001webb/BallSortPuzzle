#include "Tubo.h"

Tubo::DibujarTubo()
{

}

nodoBola* primero = NULL;

Tubo::insertarBola(Bola *p)
{
	nodoBola* nuevo = (nodoBola*)malloc(sizeof(nodoBola));
	nuevo->pelota = p;
	nuevo->sig = primero;
	primero = nuevo;
}
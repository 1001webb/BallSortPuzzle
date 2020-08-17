#pragma once

#include <iostream>
#include <stdlib.h>
#include "Bola.h"
#include "SFML\Graphics.hpp"

typedef struct nodoBola {
	Bola* pelota;
	struct nodoBola* sig;
}nodoBola;


class Tubo {
private:

public:
	Tubo();

	void insertarBola(Bola *p);
	void DibujarTubo();

};
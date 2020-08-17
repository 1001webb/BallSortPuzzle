#pragma once

#include <iostream>
#include <stdlib.h>
#include "Bola.h"
#include "SFML\Graphics.hpp"

typedef struct nodoBola {
	Bola* pelota;
	struct nodoBola* sig;
}nodoBola;

nodoBola* primero = NULL;

class Tubo {
private:

public:

	void insertarBola();

	void DibujarTubo();

};
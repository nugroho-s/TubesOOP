#include "singa.h"

singa::singa() {
	int x = rand() % 100;
	int y = rand() % 100;
	P.set(x, y);
	mlapar = 10;
}

void singa::makan() {
	mlapar = 10;
}
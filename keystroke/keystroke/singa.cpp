#include "singa.h"

singa::singa() {
	mlapar = maxlapar;
	power = 3;
	dt = 2;
	arah = 'n';
}

void singa::makan() {
	mlapar = maxlapar;
}

singa& singa::operator= (singa& s) {
	int x = rand() % 100;
	int y = rand() % 100;
	P.set(x, y);
	mlapar = s.mlapar;
	return *this;
}
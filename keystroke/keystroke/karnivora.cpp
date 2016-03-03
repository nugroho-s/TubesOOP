#include "karnivora.h"

karnivora::karnivora() {
	int x = rand() % 100;
	int y = rand() % 100;
	P.set(x, y);
	mlapar = 10;
}

void karnivora::lihat() {
	dt += 1;
}

void karnivora::bergerak() {
	makhluk::bergerak();
	mlapar--;
	printf("%d\n", mlapar);
}

int karnivora::getlapar() { return mlapar; }
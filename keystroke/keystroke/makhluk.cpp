#include "makhluk.h"

makhluk::makhluk() {
	int x = rand() % 100;
	int y = rand() % 100;
	P.set(x, y);
	//arah
}

void makhluk::bergerak() {
	if (arah = 'n')
		P.move(0, -dt);
	//teruskan untuk arah lain
	//jika keluar dari bidang, bagaimana?
}

void makhluk::printlok() {
	printf("lokasi = (%d,%d)\n", P.getX(), P.getY());
}

Point makhluk::getlok() { return P; };

void makhluk::printstatmakhluk() {
	makhluk::printlok();
}
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

Point makhluk::getlok() { return P; };
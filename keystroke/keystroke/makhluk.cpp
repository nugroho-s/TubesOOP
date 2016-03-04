//
// File: makhluk.cpp
//
// IMPLEMENTASI abstract class makhluk.h
//

#include "makhluk.h"

makhluk::makhluk() {
	// konstruktor
	// inisialisasi nilai koordinat awal objek (x, y) dengan 
	// nilai random 
	int x = rand() % 100;
	int y = rand() % 100;
	P.set(x, y);
	
	// inisialisasi nilai arah gerak awal objek dengan nilai random (0 - 7)
	int arah = rand() % 8;
}

makhluk::~makhluk() {
	// destruktor
}

void makhluk::bergerak() {
	// memindahkan objek ke posisi lain di bidang 
	
	/*
	ketentuan: 
	0 : timur
	1 : tenggara
	2 : seltan
	3 : barat daya
	4 : barat 
	5 : barat laut
	6 : utara
	7 : timur laut
	*/
	
	if (arah == 0) {
		P.move(power,0);
	} else if (arah == 1) {
		P.move(power,-power);
	} else if (arah == 2) {
		P.move(0,-power);
	} else if (arah == 3) {
		P.move(-power,-power);
	} else if (arah == 4) {
		P.move(-power,0);
	} else if (arah == 5) {
		P.move(-power,power);
	} else if (arah == 6) {
		P.move(0,power);
	} else if (arah == 7) {
		P.move(power,power);
	}

	//jika keluar dari bidang, bagaimana?
}

Point makhluk::getlok() { 
	// mengembalikan posisi (x, y) objek di bidang 
	return P; 
}
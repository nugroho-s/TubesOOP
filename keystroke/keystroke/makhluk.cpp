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
	
	switch (arah) {
		case 0 : P.move(power,0) ; break;
		case 1 : P.move(power,-power) ; break;
		case 2 : P.move(0,-power) ; break;
		case 3 : P.move(-power,-power) ; break;
		case 4 : P.move(-power,0) ; break;
		case 5 : P.move(-power,power) ; break;
		case 6 : P.move(0,power) ; break;
		case 7 : P.move(power,power) ; break;
	}
		
	//jika keluar dari bidang, bagaimana?
}

Point makhluk::getlok() { 
	// mengembalikan posisi (x, y) objek di bidang 
	return P; 
}
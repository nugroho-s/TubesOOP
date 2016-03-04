#include "board.h"
#include <cstdio>

board::board() {
	for (int i = 0; i < 92; i++) {
		for (int j = 0; j < 21; j++) {
			isi[i][j] = ' ';
		}
	}
}

void board::printboard() {
	for (int i = 0; i < 92; i++) {
		for (int j = 0; j < 21; j++) {
			printf("%c", isi[i][j]);
		}
		printf("\n");
	}
}

void board::tambah(makhluk& m) {
	Point P = m.getlok();
	isi[P.getX()][P.getY()] = 'm';
}

void board::move(makhluk& m) {
	Point P = m.getlok();
	isi[P.getX()][P.getY()] = ' ';
	m.bergerak();
	P = m.getlok();
	isi[P.getX()][P.getY()] = 'm';
}

void board::hapus(makhluk& m) {
	Point P = m.getlok();
	isi[P.getX()][P.getY()] = ' ';
}
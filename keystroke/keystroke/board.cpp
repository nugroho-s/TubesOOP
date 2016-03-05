#include "board.h"
#include <cstdio>

board::board() {
	for (int i = 0; i < sizey; i++) {
		for (int j = 0; j < sizex; j++) {
			isi[i][j] = ' ';
		}
	}
}

void board::printboard() {
	printf(" ");
	for (int i = 0; i < sizex; i++)
		printf("%d", i % 10);
	printf("\n");
	for (int i = 0; i < sizey; i++) {
		printf("%d", i % 10);
		for (int j = 0; j < sizex; j++) {
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
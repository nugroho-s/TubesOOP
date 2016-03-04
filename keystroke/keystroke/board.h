#pragma once

#include "stdafx.h"
#include "makhluk.h"

class board {
public:
	board();
	void printboard();
	//print kondisi dunia saat ini
	void tambah(makhluk&);
	//tambahkan makhluk ke papan
	void move(makhluk&);
	//gerakkan makhluk, parameter makhluk yang diminta parameter
	//adalah sebelum digerakkan
	//setelah move, makhluk akan berpindah
	void hapus(makhluk&);
	//hapus makhluk dari papan

protected:
	char isi[92][21]; //x dan y secara berurutan, bukan baris dan kolom
};
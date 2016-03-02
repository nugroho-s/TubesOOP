#pragma once
#include <stdlib.h>
#include "Point.h"

class karnivora:public makhluk {
public:
	karnivora();
	void makan();
	void lihat();
private:
	int mlapar;
	int jenismakanan;
};
#pragma once
#include <stdlib.h>
#include "Point.h"

class karnivora:public makhluk {
public:
	karnivora();
	virtual void makan() = 0;
	void lihat();
protected:
	int mlapar;
	int jenismakanan;
};
#pragma once
#include "Point.h"
#include <cstdio>
#include <stdlib.h>

class makhluk {
protected:
	int dt, umur, power;
	char arah;
	Point P;
public:
	makhluk();
	virtual void bergerak();
	virtual void makan() = 0;
	virtual int getlapar() = 0;
	Point getlok();
	void printlok();
	virtual void printstatmakhluk();
};
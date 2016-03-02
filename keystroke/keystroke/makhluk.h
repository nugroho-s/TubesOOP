#pragma once
#include "Point.h"


class makhluk {
protected:
	int dt, umur, arah, power;
	Point P;
public:
	void bergerak();
};
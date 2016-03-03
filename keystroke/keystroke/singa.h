#pragma once
#include "karnivora.h"

class singa : public karnivora{
public:
	singa();
	virtual void makan();
	singa& operator= (singa&);
private:
	const int maxlapar = 30;
};
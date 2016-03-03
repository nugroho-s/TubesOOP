#pragma once
#include "karnivora.h"

class singa : public karnivora{
public:
	singa();
	virtual void makan();
private:
	const int maxlapar = 30;
};
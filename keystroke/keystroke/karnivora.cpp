#include "karnivora.h"

karnivora::karnivora() {
	mlapar = 10;
}

/*karnivora::~karnivora() {

}*/

void karnivora::lihat() {
	dt += 1;
}

void karnivora::bergerak() {
	makhluk::bergerak();
	mlapar--;
}

int karnivora::getlapar() { return mlapar; }
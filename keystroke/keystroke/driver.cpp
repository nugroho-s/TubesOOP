#include "makhluk.h"
#include"singa.h"
#include "karnivora.h"
#include <iostream>

using namespace std;

int main() {
	makhluk* s;
	s = new singa;
	(*s).printlok();
	(*s).bergerak();
	cout << (*s).getlapar()<<endl;
	(*s).printstatmakhluk();
	(*s).makan();
	for (int i = 0; i < 3;i++)
		(*s).bergerak();
	(*s).printstatmakhluk();
	while ((*s).getlapar()>0)
		(*s).bergerak();
	(*s).printstatmakhluk();
	singa m;
	while (m.getlapar()>0)
		(m).bergerak();
	m.printstatmakhluk();
	singa m2 = m;
	m2.printstatmakhluk();
	return 0;
}
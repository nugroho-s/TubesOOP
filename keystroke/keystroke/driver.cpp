#include "makhluk.h"
#include"singa.h"
#include "karnivora.h"
#include <iostream>
#include "board.h"

void test() {
	cout << "test guarded_thread" << endl;
}

using namespace std;

int main() {
	makhluk* s;
	board b;
	guarded_thread t{ test };
	t.join();
	b.printboard();
	s = new singa;
	b.tambah(*s);
	(*s).printlok();
	b.printboard();
	cout << (*s).getlapar()<<endl;
	(*s).printstatmakhluk();
	(*s).makan();
	b.move(*s);
	for (int i = 0; i < 3;i++)
		(*s).bergerak();
	(*s).printstatmakhluk();
	while ((*s).getlapar()>0)
		(*s).bergerak();
	(*s).printstatmakhluk();
	singa m;
	b.tambah(m);
	while (m.getlapar() > 0)
		b.move(m);
	b.printboard();
	m.printstatmakhluk();
	singa m2 = m;
	m2.printstatmakhluk();
	return 0;
}
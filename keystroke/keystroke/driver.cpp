#include "makhluk.h"
#include "singa.h"
#include "karnivora.h"
#include "zebra.h"
#include <iostream>
#include "board.h"

void test() {
	cout << "test guarded_thread" << endl;
}

using namespace std;

int main() {
	list<makhluk*> LOM;
	makhluk* temp;
	int makhluk;
	while (true) {
		if (GetAsyncKeyState(VK_UP))
		{
			makhluk = rand() % 2;
			if (makhluk == 0) {
				cout << "alokasi singa" << endl;
				temp = new singa;
			}
			else {
				cout << "alokasi zebra" << endl;
				temp = new zebra;
			}
			LOM.emplace_back(temp);
		}
		if (GetAsyncKeyState(VK_ESCAPE))
			break;
		Sleep(100);
	}
	for (auto& x : LOM) {
		(*x).printstatmakhluk();
	}
	return 0;
}
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
using namespace std;
int a;

int main() {
	cout << "Blokada zostanie zwolniona za 2.5 sekundy!!!\n";
	Sleep(2500);
	srand(time(NULL));
	
	for (int b = 0; b < 6; b++) {
		a = rand() % 49 + 1;
		cout << a <<"\a" << endl;
		Sleep(3000);

	}
	return 0;
}
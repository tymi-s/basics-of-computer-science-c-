#include <iostream>
#include <windows.h>
using namespace std;
int ci�g_arytmetyczny[100];
int wyrazy_ci�gu(int a1, int r) {
	for (int d = 0; d < 100; d++) {
		ci�g_arytmetyczny[d] = a1+(d+1-1)*r;
	}
	return 0;
}


int main() {
	cout << "Podaj pierwszy wyraz ciagu arytmetycznego:";
	int a1;
	cin >> a1;
	cout << "\nPodaj roznice ciagu arytmetycznego:";
	int r;
	cin >> r;
	cout << wyrazy_ci�gu(a1, r);
	for (int i = 0; i < 100; i++) {
		cout << endl << i+1 << " wyraz ciagu: " << ci�g_arytmetyczny[i];
		Sleep(100);
		cout << ("\v");
	}
	
	return 0;
}
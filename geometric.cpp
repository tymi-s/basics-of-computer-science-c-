#include <iostream>
#include <windows.h>
using namespace std;
int ci�g_geometryczny[100];
int wyrazy_ci�gu(int a1, int q) {
	for (int d = 0; d < 100; d++) {
		ci�g_geometryczny[d] = a1*q^(d-1);
	}
	return 0;
}


int main() {
	cout << "Podaj pierwszy wyraz ciagu geometrycznego:";
	int a1;
	cin >> a1;
	cout << "\nPodaj iloraz ciagu geometrycznego:";
	int q;
	cin >> q;
	cout << wyrazy_ci�gu(a1, q);
	for (int i = 0; i < 100; i++) {
		cout << endl << i + 1 << " wyraz ciagu: " << ci�g_geometryczny[i];
		Sleep(100);
		cout << ("\v");
	}

	return 0;
}
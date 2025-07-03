#include <iostream>
#include <windows.h>
using namespace std;
int ci퉓_geometryczny[100];
int wyrazy_ci퉓u(int a1, int q) {
	for (int d = 0; d < 100; d++) {
		ci퉓_geometryczny[d] = a1*q^(d-1);
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
	cout << wyrazy_ci퉓u(a1, q);
	for (int i = 0; i < 100; i++) {
		cout << endl << i + 1 << " wyraz ciagu: " << ci퉓_geometryczny[i];
		Sleep(100);
		cout << ("\v");
	}

	return 0;
}
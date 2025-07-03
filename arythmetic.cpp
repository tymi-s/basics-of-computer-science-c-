#include <iostream>
#include <windows.h>
using namespace std;
int ci퉓_arytmetyczny[100];
int wyrazy_ci퉓u(int a1, int r) {
	for (int d = 0; d < 100; d++) {
		ci퉓_arytmetyczny[d] = a1+(d+1-1)*r;
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
	cout << wyrazy_ci퉓u(a1, r);
	for (int i = 0; i < 100; i++) {
		cout << endl << i+1 << " wyraz ciagu: " << ci퉓_arytmetyczny[i];
		Sleep(100);
		cout << ("\v");
	}
	
	return 0;
}
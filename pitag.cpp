#include <iostream>
using namespace std;
int LiczbyPitagorejskie(int a , int b , int c) {
	if (a * a + b * b == c * c) {
		cout << "\n\n";
		cout << "\nLiczby sa pitagorejskie!!!\n";
		return 1;
	}
	else {
		cout << "\nLiczby nie sa pitagorejskie!!!\n";
		return 0;
	}
}
int main() {
	cout << "Podaj liczbe x:\n";
	int x;
	cin >> x;
	cout << "Podaj liczbe y:\n";
	int y;
	cin >> y;
	cout << "Podaj liczbe z:\n";
	int z;
	cin >> z;
	cout << LiczbyPitagorejskie(x, y, z);
	return 0;
}
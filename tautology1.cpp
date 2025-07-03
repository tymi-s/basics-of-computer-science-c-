#include <iostream>
using namespace std;
bool p, q;

bool c(bool p, bool q, bool r) {
	return !p && (p || q);
}
bool negacja(bool x) {
	return !x;
}
bool koniunkcja(bool z, bool y) {
	return z && y;
}
bool alternatywa(bool w, bool o) {
	return w || o;
}
bool implikacja(bool a, bool b) {
	if (a == 1 && b == 0) {
		return 0;
	}
	else {
		return 1;
	}
}
bool rownowaznosc(bool c, bool e) {
	if (c == e) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	cout << "Podaj wartosc logicza zdania p:";
	cin >> p;
	cout << "\nPodaj wartosc logicza zdania q:";
	cin >> q;
	cout << "\nNegacja p: " << negacja(p);
	cout << "\nNegacja q: " << negacja(q);
	cout << "\nKoniunkcja p ^ q: " << koniunkcja(p, q);
	cout << "\nAlternatywa p v q: " << alternatywa(p, q);
	cout << "\nImplikacja z p wynika q: " << implikacja(p, q);
	cout << "\nRownowaznosc p i q: " << rownowaznosc(p, q);


}



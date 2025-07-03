#include <iostream>
using namespace std;
bool p = true;
bool q = true;
bool r = false;

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
		cout << "Koniunkcja p i q: " << koniunkcja(p, q);
		cout << "\nAlternatywa p i q: " << koniunkcja(p, q);
		cout << "\nPodpunkt C:\n  !p  i (p V q): " << c(p, q, r);
		return 0;
	}
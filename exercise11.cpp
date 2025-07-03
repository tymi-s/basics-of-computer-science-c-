#include <iostream>
using namespace std;
int zwierzeta(int d, int k, int s) {
	d = 2 * d;
	k = 4 * k;
	s = 4 * s;
	int b;
	b = d + k + s;
	return b;
}
int main() {
	int d;
	int k;
	int s;
	cout << "podaj liczbe kur" << endl;
	cin >> d;
	cout << "podaj liczbe krow" << endl;
	cin >> k;
	cout << "podaj liczbe swin" << endl;
	cin >> s;
	int b = zwierzeta(d, k, s);

	cout << "liczba nog zwierzat to:" << b << endl;
}
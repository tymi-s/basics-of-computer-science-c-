 ☻#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	int c;
	int d;
	int e;
	cout << "podaj liczbe a" << endl;
	cin >> a;
	cout << "podaj liczbe b" << endl;
	cin >> b;
	cout << "podaj liczbe c" << endl;
	cin >> c;
	cout << "podaj liczbe d" << endl;
	cin >> d;
	cout << "podaj liczbe e" << endl;
	cin >> e;
	int w = 0;
	w = a;
	if (b > w) {
		w = b;
	}
	if (c>w) {
		w=c;
	}
	if (d>w) {
		w=d;
	}
	if (e>w) {
		w = e;
	}
	cout << "najwieksza liczba to:" <<w << endl;
	int m = 0;
	m = a;
	if (b < m) {
		m = b;
	}
	if (c < m) {
		m = c;
	}
	if (d < m) {
		m = d;
	}
	if (e < m) {
		m = e;
	}
	cout << "najmniejsza liczba to:" << m << endl;
}
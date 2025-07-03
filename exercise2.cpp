#include <iostream>
using namespace std;
int main() {
	int k;
	int a;
	int b;
	int c;
	int d;
	int e;
	int w = 0;
	int m = 0;
	int o = 0;
	cout << "Podaj numer operacji od 1  do 5:";
	cin >> k;
	switch (k) {
	case 1:
		int rok;
		cout << "podaj rok";
		cin >> rok;
		if (rok % 4 == 0 && rok % 100 != 0) {
			cout << "rok przestepny";

		}
		if (rok % 400 == 0) {
			cout << "rok przestepny";
		}
		else {
			cout << "rok nieprzestepny";
		}
		break;
	case 2:                   // x f c
		int x;
		int f;
		cout << endl << "Wprowadz liczbe ktora rozpoczyna przedzial:";
		cin >> x;
		cout << endl << "Wporwadz liczbê konczaca przedzial:";
		cin >> f;
		cout << endl << "przedzial jest rowny:";
		if (x + 1 > f)
		{
			while (x > f)
			{
				cout << f + 1 << endl;
				if (f % 2 == 0) {
					o = o + f;
				}
				f++;

			}

		}
		else
		{
			while (x + 1 < f)
			{
				cout << x + 1 << endl;
				if (x % 2 == 0) {
					o = o + x;
				}
				x++;

			}
		}
		cout << "suma liczb nieparzystych jest rowna:" << o;
		break;
	case 3:         // a b c d e w m
		
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
		w = a;
		if (b > w) {
			w = b;
		}
		if (c > w) {
			w = c;
		}
		if (d > w) {
			w = d;
		}
		if (e > w) {
			w = e;
		}
		cout << "najwieksza liczba to:" << w << endl;
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
		break;
	case 4:                   // N y d x
		int N;
		int y;
		int p; // wprowadzona liczba
		int suma = 0;
		y = 1;
		cout << "Podaj ilosc liczb:";
		cin >> N;
		int v = N;
		while (N > 0)
		{
			cout << endl << "podaj " << y << " liczbe:";
			cin >> p;
			suma = suma + p;
			N--;
			y++;

		}
		int l = suma / v;
		cout << endl << "suma:" << suma;
		cout << endl << "srednia: " << l << ".";
		while (l > 0) {
			cout << 0;
			l--;
		}
		break;
	}
	return 0;
	}
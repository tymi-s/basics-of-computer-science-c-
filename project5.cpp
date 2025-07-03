#include <iostream>
using namespace std;
int main() {
	int N;
	int y;
	int d; // wprowadzona liczba
	int suma = 0;
	y = 1;
	cout << "Podaj ilosc liczb:";
	cin >> N;
	int o = N;
	while (N > 0)
	{
		cout << endl << "podaj " << y << " liczbe:";
		cin >> d;
		suma = suma + d;
		N--;
		y++;

	}
	float x = suma / o;
	cout << endl << "suma:" << suma;
	cout << endl << "srednia: " << x << ".";
	while (x > 0) {
		cout << 0;
		x--;
	}
	return 0;
}
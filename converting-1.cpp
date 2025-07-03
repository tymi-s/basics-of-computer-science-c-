#include <iostream>
using namespace std;


int na_szesnastkowy(int liczba) {
	if (liczba == 0) {
		return 0;
	}
	while (liczba > 0) {
		int tablica[10] = { 0,1,2,3,4,5,6,7,8,9 };
		char reszta = liczba % 16;
		switch (reszta) {
		case 1:
			reszta = '1';
			break;
		case 2:
			reszta = '2';
			break;
		case 3:
			reszta = '3';
			break;
		case 4:
			reszta = '4';
			break;
		case 5:
			reszta = '5';
			break;
		case 6:
			reszta = '6';
			break;
		case 7:
			reszta = '7';
			break;
		case 8:
			reszta = '8';
			break;
		case 9:
			reszta = '9';
			break;
		case 10:
			reszta = 'A';
			break;
		case 11:
			reszta = 'B';
			break;
		case 12:
			reszta = 'C';
			break;
		case 13:
			reszta = 'D';
			break;
		case 14:
			reszta = 'E';
			break;
		case 15:
			reszta = 'F';
			break;

		}
		cout << reszta;
		liczba = liczba / 16;
	}
	return 0;
}
int main() {
	int wprowadzona;
	cout << "Podaj liczbe dziesietna:"; cin >> wprowadzona;
	cout << "\n Zapis szesnastkowy: " << na_szesnastkowy(wprowadzona);





	return 0;
}
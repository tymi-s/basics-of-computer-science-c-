#include <iostream>
using namespace std;


// Z BINARNEGO NA SZESNASTKOWY
// KOLEJNOŒÆ
// BINARNY ---> DZIESIETNY ---> SZESNASTKOWY

string binarna;
int suma = 0;

// ZAPIS Z BINARNEGO NA DZIESIETNY:
int na_dziesietny(string binarna) {
    double j = binarna.length();
    double i = 0.0;
    

    while (i < binarna.length()) {
        suma = suma + ((binarna[i] - '0') * pow(2, j - 1));
        i++;
        j--;
    }

    return suma;
}

// Z DZIESIETNEGO NA SZESNASTKOWY:
int na_szesnastkowy(int liczba) {
	if (liczba == 0) {
		return 0;
	}
	cout << "\nW zapisie szesnastkowym: ";
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
//WPROWADZENIE LIZBY I WYNIK SZESNASTKOWY
int main() {
	
	cout << "Wprowiadz liczbe w zapisie binarnym: "; cin >> binarna;
    cout << "\nW zapisie dziesietnym: " << na_dziesietny(binarna);
	cout << na_szesnastkowy(suma);
	return 0;
}
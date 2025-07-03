#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;


char szyfrowanie(char tekst , int k) {
	if (tekst + k <= 126) {
		return tekst +k;
}
	else {
		return tekst + k - 126;
	}
}
char deszyfrowanie(char tekst, int k) {
	if (tekst - k <= 126) {
		return tekst - k;
	}
	else {
		return tekst - k + 126;
	}
}


int main() {
	int opcja;
	string tekst;
	int k;
	string szyfr;
	cout << "Jaka operacje chcesz wykonac:\n(1) Szyfrowanie\n(2) Deszyfrowanie\n"; cin >> opcja;
	// SZYFROWANIE
	if (opcja == 1) {

		cout << "Wprowadz tekst do zaszyfrowania: "; cin >> tekst;
		cout << "\nWprowadz klucz szyfrowania: "; cin >> k;
		
		for (int i = 0; i < tekst.length(); i++) {
			szyfr += szyfrowanie(tekst[i], k);
		}
		//cout << "\nInformacja zaszyfrowana: " << szyfr;
		fstream zapis;
		zapis.open("1.txt", ios::out);
		zapis << szyfr << endl;
		zapis.close();
	}
	// DESZYFROWANIE
	else if (opcja == 2) {
		fstream odczyt;
		odczyt.open("1.txt", ios::in);
		if (odczyt.good() == false) {
			cout << "\nBrak pliku\n";
			exit(0);
		}
		odczyt >> tekst;
		odczyt.close();
		cout << tekst << endl;
		cout << "\nWprowadz klucz deszyfrowania: "; cin >> k;
		
		for (int i = 0; i < tekst.length(); i++) {
			szyfr += deszyfrowanie(tekst[i], k);
		}
		cout << "\nInformacja odszyfrowana: " << szyfr;
	}
	
	// ERROR
	else {
		cout << "\nERROR";
		return 0;
	}
	
	
	return 0;
}
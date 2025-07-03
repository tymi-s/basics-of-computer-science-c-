#include <iostream>
using namespace std;
int x;
double Pa;

double bar(double bary) {
	double bary1 = Pa * 0.00005;
	return bary1;
		
}

double tor(double tory) {
	double tory1 = Pa * 0.0075;
	return tory1;
}
double psi(double psii) {
	return Pa * 145, 038e-6;
}

int main() {
	cout << "\nNa jaka jednkostke chcesz zamienic:\n1 bar\n2 tor\n3 psi\n";
	cin >> x;
	cout << "podaj ilosc Paskali: ";
	cin >> Pa; 
	switch(x) {
	case 1:
		cout << Pa;
		cout << " Paskali to:\n" << bar(Pa) << " Barow\n\n";
		break;
	case 2:
		cout << Pa << " Paskali to:\n" << tor(Pa) << " Torow\n\n";
		break;
	case 3:
		cout << Pa << " Paskali to:\n" << psi(Pa) << " psi\n\n";
	}
	
	

	return 0;
}
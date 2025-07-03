#include <iostream>
using namespace std;
string binarna = ""; // pocz¹tkowa wartoœæ ³añcucha
string na_binarne(int dziesietna) {
	if (dziesietna == 0) {
		return 0;
	}
	
	while (dziesietna > 0) {
		binarna = char('0' + dziesietna % 2) + binarna;//dodawanie do ³añcucha wartoœci binarnych za pomoc¹ reszty i zmiennej typy char w pêtli
		dziesietna = dziesietna / 2;
	}
	return binarna;
}
int main() {
	int wprowadzona;
	cout << "Podaj liczbe dziesietna:"; cin >> wprowadzona;
	cout << "\nZapis binarny: " << na_binarne(wprowadzona);
	
	
	
	

	return 0;
}
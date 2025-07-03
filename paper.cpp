#include <iostream>
#include <cstdlib>
#include <time.h> //lub ctime
using namespace std;
int main() {
	cout << "1 papier\n2 kamien\n3 nozyce\n";
	int a;
	int b = 1;
	int c;
	
	while (b <= 3) {

		// wybór operacji
		cout << "co wybierasz:\n";
		cin >> a;

		// losowanie liczby z zakresu 1-3 (komputer wybiera papier kamieñ lub no¿yce)
		srand(time(NULL)); // start random
		c = rand() % 3 + 1;
		cout << c;
		if (a == c) {
			cout << "\nREMIS!\n";
		}
		else {
			if ((a == 1 && c == 2) || (a == 2 && c == 3) || (a == 3 && c == 1)) {
				cout << "\nWYGRANA!\n";
			}
			else {
				cout << "\nPRZEGRYWASZ!\n";
			}
		}
			
	b++;

	}
	return 0;
}
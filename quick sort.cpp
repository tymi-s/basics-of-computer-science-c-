#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std; 

void quicksort(int* tablica1, int lewa, int prawa) {
	int i, j, x;
	int k = tablica1[(lewa + prawa) /2 ];
	i = lewa;
	j = prawa;
	do {
		while (tablica1[i] < k) i++;

		while (tablica1[j] > k) j--;

		if (i <= j) {
			x = tablica1[i];
			tablica1[i] = tablica1[j];
			tablica1[j] = x;
			i++; j--;

		}
	} while (i <= j);
	if (j > lewa) quicksort(tablica1, lewa, j);
	if (i < prawa) quicksort(tablica1, i, prawa);
}
clock_t start, stop;
double czas= 0.000000000;

int main() {
	
	int o;
	cout << "Podaj rozmiar tablicy: "; cin >> o;
	int* tablica1 = new int[o];
	srand(time(NULL));
	start = clock();
	for (int i = 0; i < o; i++) {
		tablica1[i] = rand() % 100000 + 1;
	}
	
	quicksort(tablica1, 0,o-1);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << "\n Czas wykonywania instrukcji:"<<setprecision(5)<< czas << "s";
	//for (int i = 0; i < o; i++) {
	//	cout << endl << tablica1[i]<< endl;
	//}
	delete[] tablica1;
	return 0;
}
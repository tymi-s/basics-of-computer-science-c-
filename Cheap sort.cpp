=#include <iostream>
#include <time.h>

using namespace std;


void heapify(int arr[], int n, int i) {
    int najwieksza = i;  
    int lewa = 2 * i + 1;  
    int prawa = 2 * i + 2; 

    
    if (lewa < n && arr[lewa] > arr[najwieksza])
        najwieksza = lewa;

    
    if (prawa < n && arr[prawa] > arr[najwieksza])
        najwieksza = prawa;

    
    if (najwieksza != i) {
        swap(arr[i], arr[najwieksza]);

        
        heapify(arr, n, najwieksza);
    }
}


void heapSort(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    
    for (int i = n - 1; i > 0; i--) {
        
        swap(arr[0], arr[i]);

        
        heapify(arr, i, 0);
    }
}

int main() {
    int rozmiar;
    cout << "Wprowadz rozmiar tablicy: ";
    cin >> rozmiar;

    int* tablica = new int[rozmiar];

    srand(time(NULL));

    
    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = rand() % 100000 + 1;
    }

    
    clock_t start = clock();

   
    heapSort(tablica, rozmiar);

    
    clock_t stop = clock();

    
    double elapsed_time = double(stop - start) / CLOCKS_PER_SEC;

    

    cout << "\nZmierzony czas:  " << elapsed_time << " s" << endl;

    
    delete[] tablica;

    return 0;
}

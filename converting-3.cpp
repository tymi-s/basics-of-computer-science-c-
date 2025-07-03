#include <iostream>
#include <cmath>
using namespace std;

int na_dziesietny(string binarna) {
    double j = binarna.length();
    double i = 0.0;
    double suma = 0.0;

    while (i < binarna.length()) {
        suma = suma + ((binarna[i] - '0') * pow(2, j - 1));
        i++;
        j--;
    }

    return suma;
}

int main() {
    string binarna;
    cout << "Podaj liczbe w systemie binarnym:";
    cin >> binarna;

    cout << "\nZapis w systemie dziesietnym: " << na_dziesietny(binarna);

    return 0;
}

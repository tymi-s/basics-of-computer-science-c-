// ci¹g fiboniacziego 
#include <iostream>
#include <windows.h>
using namespace std;
int fib[10000];

int main() {
	int n;
	fib[0] = 1;
	fib[1] = 1;
	cout << "podaj ilosc wyrazow ciagu fibonacziego: ";
	cin >> n;
	for (int i = 2; i < n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (int i = 0; i < n; i++) {
		cout << endl << "wyraz nr. " << i+1 << "   " << fib[i];
		Sleep(100);
	}


	return 0;
} 
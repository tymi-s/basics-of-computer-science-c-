#include <iostream>
using namespace std;

int main() {
	int rok;
	cout << "podaj rok";
	cin >> rok;
	if (rok % 4 == 0 && rok % 100 != 0) {
		cout << "rok przestepny";

	}
	if (rok % 400 == 0) {
		cout << "rok przestepny";
	}
	else {
		cout << "rok nieprzestepny";
	}
}
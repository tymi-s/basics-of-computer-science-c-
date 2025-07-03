#include <iostream>
using namespace std;
int robot(int x, int y) {
	int r;
	r = x, y;
	return r;
}
int main() {
	int y;
	int x;
	int y1;
	int x1;
	cout << "podaj liczbe krokow na polnoc" << endl;
	cin >> y;
	cout << "podaj liczbe krokow na wschod" << endl;
	cin >> x;
	cout << "podaj liczbe krokow na poludnie" << endl;
	cin >> y1;
	cout << "podaj liczbe krokow na zachod" << endl;
	cin >> x1;
	int r = robot(x, y);
	x = x - x1;
	y = y - y1;
	cout << "polozenie robota to:" << x <<","<< y << endl;
}
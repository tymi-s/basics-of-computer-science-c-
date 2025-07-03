#include <iostream>
using namespace std;
int main() {
	int x;
	int y;
	cout << endl << "Wprowadz liczbe ktora rozpoczyna przedzial:";
	cin >> x;
	cout << endl << "Wporwadz liczbê konczaca przedzial:";
	cin >> y;
	int c = 0;
	cout << endl << "przedzial jest rowny:";
	if (x + 1 > y) 
	{
		while (x > y) 
		{
			cout << y + 1 << endl ;
			if (y % 2 == 0) {
				c = c + y ;
			}
			y++;
		
		}

	}
	else 
	{
		while (x + 1 < y) 
			{
			cout << x + 1 << endl ;
			if(x % 2 == 0){
				c = c + x;
			}
			x++;
		
		}
	}
	cout << "suma liczb nieparzystych jest rowna:" << c;
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	// input od użytkownika
	int n;
	cout << "Wprowadź N: ";
	cin >> n;

	// zmienne
	int lp = 0;
	int p = 2;
	int d;



	while (lp < n) {
		bool isPrime = true;
		for (int d = 2; d <= p - 1; d++) {
			if (p % d == 0) {
				isPrime = false;
			}
		}

		if (isPrime) {
			cout << p << endl;
			lp++;
		}
		p++;
	}
}

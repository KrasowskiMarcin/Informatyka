#include <iostream>

using namespace std;


void fibonacci(int n) {
	int f0 = 0;
	int f1 = 1;
	int f;

	for (int i = 0; i <= n; i++) {
		if (i > 1) {
			f = f0 + f1;
			f0 = f1;
			f1 = f;
		}
		else {
			f = i;
		}
		cout << f<<endl;
	}
}

int main()
{
	int liczba;
	cout << "podaj n: ";
	cin >> liczba;

	fibonacci(liczba);
}

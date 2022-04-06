#include <iostream>
using namespace std;

int main()
{
    int a, b;

    // input
    cout << "Podaj pierwszą liczbę: ";
    cin >> a;
    cout << "Podaj drugą liczbę: ";
    cin >> b;

    int iloczyn = (a * b);
    int nww;

    while (a != b) {
        if (a < b) {
            b -= a;
        }
        else {
            a -= b;
        }
    }

    nww = iloczyn / a;

    // output
    cout << "Największy wspólny dzielnik: " << a << endl;
    cout << "Największa wspóna wartość: " << nww;
}

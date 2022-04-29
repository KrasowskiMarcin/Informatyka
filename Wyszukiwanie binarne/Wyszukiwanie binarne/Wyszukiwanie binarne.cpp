#include <iostream>

using namespace std;

int main()
{
    const int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

    // zmienne pomocnicze
    int l = 0;
    int p = sizeof(tab)/sizeof(*tab)-1;
    int sr = (l + p) / 2;

    // input
    int szukana;
    cout << "Podaj liczbę, którą chcesz znaleźć : ";
    cin >> szukana;

    while (l <= p) {
        if (tab[sr] == szukana) {
            cout << "Szukana znajduje się w indexie " << sr;
            return sr;
        }
        
        if(tab[sr] > szukana){
            p = sr - 1;
        }
        else if (tab[sr] < szukana) {
            l = sr + 1;
        }

        sr = (l + p) / 2;
    }

    cout << "Szukana nie znajduje się w tablicy";
    return -1;
}

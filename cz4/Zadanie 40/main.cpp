#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Podaj numer z dziennika: ";
    int nr_z_dziennika;
    cin >> nr_z_dziennika;

    int szukana_liczba = 1000 + nr_z_dziennika * 100 + 15;

    cout << "Podana liczba = 1000 + nr_z_dziennika * 100 + 15 wynosi " << szukana_liczba << endl;

    int pierwsza = 0;
    for (int liczba = szukana_liczba; ;++liczba) {
        pierwsza = 0;
        for (int dzielnik = 2; dzielnik <= sqrt(liczba); ++dzielnik) {
            if (liczba % dzielnik == 0) {
                pierwsza = 1;
                break;
            }
        }
        if (pierwsza == 0) {
            cout << "Najblizsza liczba pierwsza to " << liczba << endl;
            break;
        }
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}


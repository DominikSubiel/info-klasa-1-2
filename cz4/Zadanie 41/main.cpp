#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int dol, gor;

    cout << "podaj dolna wartosc dol=";
    cin >> dol;

    cout << "podaj wartosc gora=";
    cin >> gor;



    int suma = 0;

    for (int j = dol; j <= gor; ++j) {
        int k = 0;
        for (int i = 2; i <= sqrt(j); ++i) {
            if (j % i == 0) {
                k = 1;
                break;
            }
        }

        if (k == 0) {
            cout << "liczba " << j << " to jest liczba pierwsza" << endl;
            suma += j;
        }
    }

    cout << "suma=" << suma << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}


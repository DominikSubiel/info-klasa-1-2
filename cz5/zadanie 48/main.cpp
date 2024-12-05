#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	system ("chcp 1250");
    int wiersz = -1;
    float srednia;
    float wynik = 0;
    int macierz[5][2];
    float A[5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Podaj element macierzy a[" << i << "][" << j << "] = ";
            cin >> macierz[i][j];
        }
    }

    cout << "\n";

    int wiersz_max_srednia = 0;

    for (int ii = 0; ii < 5; ii++) {
        wiersz++;
        wynik = 0;

        for (int ji = 0; ji < 2; ji++) {
            cout << macierz[ii][ji] << "\t";
            wynik = wynik + macierz[ii][ji];
        }

        srednia = wynik / 2;
        A[ii] = srednia;
        cout << "Srednia w wierszu " << wiersz << " macierz wynosi: " << srednia << endl;

        if (A[ii] > A[wiersz_max_srednia]) {
            wiersz_max_srednia = ii;
        }
    }
  cout << "Tablica œrednich wygl¹da nastêpuj¹co: {";
    for (int i = 0; i < 5; i++) {
        cout << A[i];
        if (i < 4) {
            cout << ", ";
        }
    }
    cout << "}\n";
    cout << "\nNajwieksza srednia jest w wierszu " << wiersz_max_srednia << endl;

    float max_srednia = A[wiersz_max_srednia]; // Najwieksza srednia to element "a"
    float min_srednia = A[0];
    int min_srednia_index = 0;
    int max_srednia_index = wiersz_max_srednia;

    for (int z = 1; z < 5; z++) {
        if (A[z] < min_srednia) {
            min_srednia = A[z];
            min_srednia_index = z;
        }
    }

    
    cout << "Max: A[" << max_srednia_index << "] = " << max_srednia << " - najwieksza srednia\n";
    cout << "Min: A[" << min_srednia_index << "] = " << min_srednia << " - najmniejsza srednia\n";
  

    system("PAUSE");
    return EXIT_SUCCESS;
}

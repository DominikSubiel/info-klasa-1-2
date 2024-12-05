#include <iostream>
using namespace std;

int main() {
    system("chcp 1250");
    const int wiersze = 3;
    const int kolumny = 4;

    int macierz[wiersze][kolumny];
    int indeks[wiersze][kolumny];
    int suma = 0;

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << "Podaj element macierzy a[" << i << "][" << j << "] = ";
            cin >> macierz[i][j];
            indeks[i][j] = i * kolumny + j;
        }
    }

    cout << "\nWprowadzona macierz:\n";
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << macierz[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            suma += macierz[i][j];
        }
    }

    cout << "\nSuma wszystkich elementów macierzy: " << suma << endl;

    int liczba;
    cout << "Podaj liczbê do pomno¿enia macierzy: ";
    cin >> liczba;

    int wynik[wiersze][kolumny];

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            wynik[i][j] = macierz[i][j] * liczba;
        }
    }

    cout << "\nMacierz po pomno¿eniu przez liczbê " << liczba << ":\n";
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << wynik[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

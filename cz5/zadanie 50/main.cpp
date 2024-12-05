#include <iostream>
using namespace std;

int main() {
	system ("chcp 1250");
	system ("CLS");
    const int wiersze = 3;
    const int kolumny = 3;

    int macierz[wiersze][kolumny];

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << "Podaj a[" << i << "][" << j << "]: ";
            cin >> macierz[i][j];
        }
    }

    int macierz3x5[wiersze][kolumny + 2];
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            macierz3x5[i][j] = macierz[i][j];
        }
        macierz3x5[i][kolumny] = macierz[i][0];
        macierz3x5[i][kolumny + 1] = macierz[i][1];
    }

    cout << "\nPe³na macierz ze skopiowanymi elementami wygl¹da nastepuj¹co:\n";
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny + 2; j++) {
            cout << macierz3x5[i][j] << "\t";
        }
        cout << endl;
    }

    int wyznacznik = 0;
    for (int i = 0; i < wiersze; i++) {
        int iloczyn_prawo = 1;
        int iloczyn_lewo = 1;

        for (int j = 0; j < kolumny; j++) {
            iloczyn_prawo *= macierz3x5[i + j][j];
            iloczyn_lewo *= macierz3x5[i + j][kolumny + j];
        }

        wyznacznik += iloczyn_prawo - iloczyn_lewo;
    }
    cout << "Wyznacznik tablicy a=(";
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << macierz[i][j];
            if (j < kolumny - 1) {
                cout << "+";
            }
        }
        if (i < wiersze - 1) {
            cout << ")-(";
        }
    }
    cout << ")=" << wyznacznik << endl;

    return 0;
}


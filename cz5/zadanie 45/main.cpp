#include <iostream>
using namespace std;

int main() {
	system ("chcp 1250");
    const int max_elements = 10;
    int a[max_elements];
    int i;

    cout << "Podaj iloœæ elementów a (maksymalnie " << max_elements << "): ";
    int ilosc_elementow;
    cin >> ilosc_elementow;

    if (ilosc_elementow > max_elements) {
        cout << "Iloœæ elementów nie mo¿e przekroczyæ " << max_elements << "!" << endl;
        return 1; // Zwracamy 1, aby wskazaæ, ¿e program zakoñczy³ siê z b³êdem.
    }

    for (i = 0; i < ilosc_elementow; i++) {
        cout << "Podaj a[" << i << "]: ";
        cin >> a[i];
    }

    int zmiany_znakow = 0;

    for (i = 1; i < ilosc_elementow; i++) {
        if ((a[i - 1] < 0 && a[i] >= 0) || (a[i - 1] >= 0 && a[i] < 0)) {
            zmiany_znakow++;
        }
    }

    cout << "Iloœæ zmian znaków: " << zmiany_znakow << endl;

    return 0; // Zwracamy 0, aby wskazaæ, ¿e program zakoñczy³ siê bez b³êdów.
}


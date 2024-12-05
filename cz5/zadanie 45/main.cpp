#include <iostream>
using namespace std;

int main() {
	system ("chcp 1250");
    const int max_elements = 10;
    int a[max_elements];
    int i;

    cout << "Podaj ilo�� element�w a (maksymalnie " << max_elements << "): ";
    int ilosc_elementow;
    cin >> ilosc_elementow;

    if (ilosc_elementow > max_elements) {
        cout << "Ilo�� element�w nie mo�e przekroczy� " << max_elements << "!" << endl;
        return 1; // Zwracamy 1, aby wskaza�, �e program zako�czy� si� z b��dem.
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

    cout << "Ilo�� zmian znak�w: " << zmiany_znakow << endl;

    return 0; // Zwracamy 0, aby wskaza�, �e program zako�czy� si� bez b��d�w.
}


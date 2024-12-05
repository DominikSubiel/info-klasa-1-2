#include <iostream>
using namespace std;

int ileKrokow(int n) {
    int ile = 1;

    while (n != 1) {
        if (n % 2 != 0) {
            n = 3 * n + 1;
        } else {
            n /= 2;
        }
        ile++;
    }

    return ile;
}

int main() {
    int n, ile = 1;

krok1:
    cout << "Podaj n=";
    cin >> n;

krok2:
    if (n == 1) {
        goto krok4;
    }

krok3:
    ile = ileKrokow(n);
    n = 1;

krok4:
    cout << "ile=" << ile << endl;
    cout << "n=" << n << endl;
    
    return 0;
}

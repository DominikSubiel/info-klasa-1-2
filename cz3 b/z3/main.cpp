#include <iostream>
using namespace std;

int main() {
    int a, b, c, min, max;
    cout << "Podaj wartosci a, b, c rozdzielajace spacjami:";
    cin >> a >> b >> c;
    cout << "Wprowadzone liczby to: " << a << ", " << b << ", " << c << endl;

    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    cout << "Wypisuje liczby rosnaco: ";
    if (c < min) {
        cout << c << ", " << min << ", " << max << endl;
    } else if (c < max) {
        cout << min << ", " << c << ", " << max << endl;
    } else {
        cout << min << ", " << max << ", " << c << endl;
    }

    return 0;
}

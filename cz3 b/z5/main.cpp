
#include <iostream>
using namespace std;

int main() {
    int k = 0;
    int N, d;

    cout << "Podaj liczbe N: ";
    cin >> N;

    while (N != 0) {
        d = N % 10;
        N = N / 10;
        k = k + d;
    }

    cout << "Wartosc K: " << k << endl;

    return 0;
}

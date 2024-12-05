#include <iostream>

using namespace std;

int main() {
    double suma = 0.0;

    for (int n = 1; n <= 1000000; ++n) {
        suma += 1.0 / static_cast<double>(n);
    }

    cout << "Suma szeregu harmonicznego od 1 do 1000000: " << suma << endl;

    return 0;
}


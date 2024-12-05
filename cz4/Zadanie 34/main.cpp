#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int nr_w_dzienniku = 25;

    cout.precision(2);

    for (int i = 180 + nr_w_dzienniku; i <= 200 + nr_w_dzienniku; ++i) {
        double pierwiastek = sqrt(i);
        cout << "SQRT(" << i << ")=" << fixed << pierwiastek << endl;

        for (int j = 0; j < 28; ++j) {
            cout << ".";
        }
        cout << endl;
    }

    return 0;
}


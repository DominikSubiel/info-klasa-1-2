#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   
    cout << "  |";
    for (int i = 1; i <= 7; ++i) {
        cout << setw(4) << i;
    }
    cout << endl;

   
    cout << "===============================" << endl;


    for (int i = 1; i <= 7; ++i) {
        cout << setw(2) << i << "|";
        for (int j = 1; j <= 7; ++j) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}


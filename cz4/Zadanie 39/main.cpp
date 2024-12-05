#include <iostream>
using namespace std;

void RysujLinie(int x, int y, int d) {
    for (int i = 0; i < y; i++) {
        cout << endl;
    }

    for (int i = 0; i < d; i++) {
        for (int j = 0; j < x - d / 2; j++) {
            cout << " ";
        }
        for (int j = 0; j < d; j++) {
            if (j == d / 2) {
                cout << "0";
            } else {
                cout << "-";
            }
        }
        break;  
    }
    cout << endl;
}

int main() {
    system("chcp 1250");
    system("CLS");

    int x, y, d;

    cout << "Podaj zmienn¹ (kolumnê ekranu) x=";
    cin >> x;

    cout << "Podaj zmienn¹ (wiersz ekranu) y=";
    cin >> y;

    cout << "Podaj d³ugoœæ linii D=";
    cin >> d;

    RysujLinie(x, y, d);

    return 0;
}


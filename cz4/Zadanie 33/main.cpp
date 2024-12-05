#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main() {
    // ETAP 1
    for (int i = 33; i <= 255; ++i) {
        cout << "kod znaku " << i << " " << (char)i << " ";

    
        if (i % 3 == 0) {
            cout << "\n";
        }
    }

    // ETAP 2
    cout << "\n\nNacisnij dowolny klawisz, aby kontynuowac...";
    getch();
    system("cls");

    int rowCounter = 0;
    const int rowsPerScreen = 20;

    for (int i = 33; i <= 255; ++i) {
        cout << "kod znaku " << i << " " << (char)i << " ";

    
        if (++rowCounter % rowsPerScreen == 0) {
            cout << "\n\nNacisnij dowolny klawisz, aby kontynuowac...";
            getch();
            system("cls");
            rowCounter = 0;
        }
    }

    // ETAP 3
    const int columnsPerScreen = 3;

    for (int i = 33; i <= 255; ++i) {
        cout << "kod znaku " << i << " " << (char)i << " ";

        
        if (++rowCounter % columnsPerScreen == 0) {
            cout << "\n";
        } else {
            cout << "             "; 
        }
    }

    return 0;
}


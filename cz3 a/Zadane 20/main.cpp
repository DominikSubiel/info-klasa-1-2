#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
using namespace std; 
int main(int argc, char** argv) 
{ 
system ("chcp 1250");
system("cls");
    float x;
    char odpowiedz;

    do {
        while (true) {
            cout << "Dzie� dobry\n b�d� powtarza� program, a� do wczytania liczby z przedzia�u <-3,2)\nPodaj liczb� x: ";
            cin >> x;

            if (x>= -3 && x< 2) {
                break;
            }
        }

        cout << "je�li powt�rzy� program wci�nij t(tak)\nw przeciwym wypadku wci�nij dowolny klawisz literowy\n\n ";
        cin >> odpowiedz;
    } while (odpowiedz == 't' || odpowiedz == 'T');

    return 0;
}

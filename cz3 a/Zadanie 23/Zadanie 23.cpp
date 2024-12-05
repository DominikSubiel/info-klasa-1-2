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
            cout << "Dzieñ dobry\n bêdê powtarza³ program, a¿ do wczytania liczby z przedzia³u <-3,2)\nPodaj liczbê x: ";
            cin >> x;

            if (x>= -3 && x< 2) {
                break;
            }
        }

        cout << "jeœli powtórzyæ program wciœnij t(tak)\nw przeciwym wypadku wciœnij dowolny klawisz literowy\n\n ";
        cin >> odpowiedz;
    } while (odpowiedz == 't' || odpowiedz == 'T');

    return 0;
}

#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
using namespace std; 
int main(int argc, char** argv) 
{ 
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15|
FOREGROUND_INTENSITY);
system ("chcp 1250");
system("cls");

    float A, B, C;

    while (true) {
        cout << "Podaj warto�� liczby A: ";
        cin >> A;
        cout << "\n";
        cout << "Podaj warto�� liczby B: ";
        cin >> B;
        cout << "\n";
        cout << "Podaj warto�� liczby C: ";
        cin >> C;
        if (A == B || B == C || A == C) {
        	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12|
FOREGROUND_INTENSITY);
            cout << "\nliczby o tej samej warto�ci podaj ponownie warto�ci liczb\n" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15|
FOREGROUND_INTENSITY);
            continue;
        }

        break;
    }

    float najwieksza, srednia, najmniejsza;

    if (A > B && A > C) {
        najwieksza = A;
        if (B > C) {
            srednia = B;
            najmniejsza = C;
        } else {
            srednia = C;
            najmniejsza = B;
        }
    } else if (B > A && B > C) {
        najwieksza = B;
        if (A > C) {
            srednia = A;
            najmniejsza = C;
        } else {
            srednia = C;
            najmniejsza = A;
        }
    } else {
        najwieksza = C;
        if (A > B) {
            srednia = A;
            najmniejsza = B;
        } else {
            srednia = B;
            najmniejsza = A;
        }
    }

    cout << "Najwi�ksza = " << najwieksza << endl;
    cout << "�rednia = " << srednia << endl;
    cout << "Najmniejsza = " << najmniejsza << endl;

    return 0;
}

#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
    system("chcp 1250");
    system("cls");

    float a, b, c, opcja, p, S, r, R;

    printf("umiem oblicza� pole tr�jk�ta oraz promie� ko�a wpisanego lub opisanego na tr�jk�tacie\npo podaniu d�ugo�ci bok�w tr�jk�ta\numiem sprawdza� wczytane dane\nmusisz wybra� opcje\n");
    printf("******************************************\n");
    printf("1- pole tr�jk�ta\n");
    printf("2- promie� ko�a opisanego w tr�jk�cie\n");
    printf("3- promie� ko�a wpisanego w tr�jk�t\n");
    printf("******************************************\n");

    do {
        printf("podaj opcje\n");
        scanf("%f", &opcja);
    } while ((opcja != 1) && (opcja != 2) && (opcja != 3));

    bool bokiTworzaTrojkat = false;

    while (!bokiTworzaTrojkat) {
        printf("Podaj d�ugo�� boku A w centymetrach: ");
        scanf("%f", &a);
        printf("Podaj d�ugo�� boku B w centymetrach: ");
        scanf("%f", &b);
        printf("Podaj d�ugo�� boku C w centymetrach: ");
        scanf("%f", &c);

        if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
            bokiTworzaTrojkat = true;
        } else {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4 | FOREGROUND_INTENSITY);
            printf("Boki nie tworz� tr�jk�ta.\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7 | FOREGROUND_INTENSITY);
        }
    }

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10 | FOREGROUND_INTENSITY);
    printf("Boki tworz� tr�jk�t\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7 | FOREGROUND_INTENSITY);
    printf("Wczytane dane:\n");
    printf("A = %.2f cm\n", a);
    printf("B = %.2f cm\n", b);
    printf("C = %.2f cm\n", c);
    printf("Wyniki:\n");

    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    r = S / p;
    R = (a * b * c) / (4 * S);

    if (opcja == 1) {
        printf("Pole tr�jk�ta: %.2f cm2\n", S);
    } else if (opcja == 2) {
        printf("Promie� ko�a opisanego: %.2f\n", R);
    } else if (opcja == 3) {
        printf("Promie� ko�a wpisanego:%.2f\n", r);
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}


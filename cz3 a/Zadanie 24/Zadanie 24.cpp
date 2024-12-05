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

    printf("umiem obliczaæ pole trójk¹ta oraz promieñ ko³a wpisanego lub opisanego na trójk¹tacie\npo podaniu d³ugoœci boków trójk¹ta\numiem sprawdzaæ wczytane dane\nmusisz wybraæ opcje\n");
    printf("******************************************\n");
    printf("1- pole trójk¹ta\n");
    printf("2- promieñ ko³a opisanego w trójk¹cie\n");
    printf("3- promieñ ko³a wpisanego w trójk¹t\n");
    printf("******************************************\n");

    do {
        printf("podaj opcje\n");
        scanf("%f", &opcja);
    } while ((opcja != 1) && (opcja != 2) && (opcja != 3));

    bool bokiTworzaTrojkat = false;

    while (!bokiTworzaTrojkat) {
        printf("Podaj d³ugoœæ boku A w centymetrach: ");
        scanf("%f", &a);
        printf("Podaj d³ugoœæ boku B w centymetrach: ");
        scanf("%f", &b);
        printf("Podaj d³ugoœæ boku C w centymetrach: ");
        scanf("%f", &c);

        if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
            bokiTworzaTrojkat = true;
        } else {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4 | FOREGROUND_INTENSITY);
            printf("Boki nie tworz¹ trójk¹ta.\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7 | FOREGROUND_INTENSITY);
        }
    }

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10 | FOREGROUND_INTENSITY);
    printf("Boki tworz¹ trójk¹t\n");
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
        printf("Pole trójk¹ta: %.2f cm2\n", S);
    } else if (opcja == 2) {
        printf("Promieñ ko³a opisanego: %.2f\n", R);
    } else if (opcja == 3) {
        printf("Promieñ ko³a wpisanego:%.2f\n", r);
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}


#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {
	
	system("Chcp 1250");
	system("cls");
	const float PI = 3.14;
	float c=30;
    float a, b, pole, cos_alfa, sin_alfa, tg_alfa, alfa;

    printf("Podaj przyprostokatna a: ");
    scanf("%f", &a);

    b = sqrt(pow(c, 2) - pow(a, 2));
    pole = (a * b) / 2;
    cos_alfa = b / c;
    sin_alfa = a / c;
    tg_alfa = a / b;
    alfa = atan(tg_alfa) * 180 / M_PI;

    printf("\nBok b wynosi: %.3f cm\n", b);
    printf("Pole trójk¹ta wynosi: %.3f cm2\n", pole);
    printf("Cosinus k¹ta alfa wynosi: %.3f\n", cos_alfa);
    printf("Sinus k¹ta alfa wynosi: %.3f\n", sin_alfa);
    printf("Tangens k¹ta alfa wynosi: %.3f\n", tg_alfa);
    printf("K¹t alfa wynosi: %.3f stopni\n", alfa);

    return 0;
}

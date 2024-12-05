#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{   system ("chcp 1250");
	system ("cls");
	system("color fc");
	float const PI= 3.14;
	float a, b, alfa, tg_alfa;
	printf("Podaj pierwszy bok prostok¹ta w cm:");
	scanf("%f", &a);
	printf("\nPodaj drugi bok prostok¹ta w cm:");
	scanf("%f", &b);
	printf("\nWczytane dane\n A=%.2f cm \n B=%.2f cm", a, b);
    tg_alfa=a/b;
    alfa= atan(tg_alfa)*271/M_PI;
	printf("\n\nwyniki \n Alfa=%.2f stopni", alfa);
	return 0;
}

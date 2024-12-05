#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{   system ("chcp 1250");
	system ("cls");
	float a, b, c, d, e;
	printf("Podaj pierwsz¹ liczbê:   A=");
	scanf("%f", &a);
	printf("\nPodaj drug¹ liczbê:   B=");
	scanf("%f", &b);
	printf("\nPodaj trzeci¹ liczbê:   C=");
	scanf("%f", &c);
	printf("wczytane s¹ liczby:   A=%.0f    B=%.0f    C=%.0f", a, b, c);
	d= a+b+c;
	e=(a+b+c)*(a+b+c)*(a+b+c);
	printf("\n%.0f= %.0f + %.0f + %.0f", d, a, b, c);
	printf("\n%.0f= (%.0f + %.0f + %.0f)^3", e, a, b, c);
	return 0;
}

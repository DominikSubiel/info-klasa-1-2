#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{   system ("chcp 1250");
    float x, kwadrat, szescian;
    printf("Podaj liczbê naturaln¹:");
    scanf("%f",&x);
    printf("\nwczytana liczba x=");
    printf("%.0f",x);
    kwadrat=x*x;
    szescian=x*x*x;
    printf("\nkwadrat liczby x=");
	printf("%.0f",x);
	printf(" ");
	printf("%.0f",x);
	printf("^2=");
	printf("%.0f",kwadrat);
    printf("\nszescian liczby x=");
	printf("%.0f",x);
	printf(" ");
	printf("%.0f",x);
	printf("^3=");
	printf("%.0f",szescian);
}

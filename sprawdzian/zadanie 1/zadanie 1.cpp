#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{   system ("chcp 1250");
	system ("cls");
	float masa, sila, predkosc;
	printf("Podaj masê cia³a:");
	scanf("%f", &masa);
	printf("\nPodaj wartoœæ si³y dzia³aj¹cj na cialo:");
	scanf("%f", &sila);
	predkosc=sila/masa;
    printf("Dane:\n m=%.2f kg\n F=%.2f N\n obliczone\n a=%.2f m (s^2)", masa, sila, predkosc);
	return 0;
}

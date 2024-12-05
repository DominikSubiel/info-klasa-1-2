#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) 
{ 
system ("chcp 1250");
float a,b;

printf("Program wykonuje dzielenie lizby a przez b\n");

printf("Podaj liczbe a:\n");
scanf("%f",&a);

printf("Podaj liczbe b:\n");
scanf("%f",&b);
	if (b!=0)
{
   printf("wynik dzielenia to %.3f", a/b);
}
else
{
	printf("B³¹d! Dzialenie przez 0");
}
return 0;
}

#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
float x;
int main(int argc, char** argv) {
	system("chcp 1250");
	printf("Bede sprawdza³ czy liczba nale¿y do przedzia³u <-5,6)\n");
	printf("Podaj liczbe do sprawdzenia: ");
	scanf("%f",&x);
	printf("\n");
	if (x>=-5 and x<6)
{
   printf("liczba nale¿y do przedzia³u <-5,6)");
}
else
{
	printf("liczba nie nale¿y do przedzia³u <-5,6)");
}
 
	 return 0;
}

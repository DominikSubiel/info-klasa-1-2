#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) 
{ 
system ("chcp 1250");
float a;
printf("Podaj liczbe ca�kowit�\n");
scanf("%f",&a);
	if (a==0)
{
   printf("liczba r�wna zero");
   return 0;
}
if (a>0)
{
   printf("liczba wi�ksza od zera");
   
}
else 
{
	printf("liczba mniejsza od zera");
}
return 0;
}

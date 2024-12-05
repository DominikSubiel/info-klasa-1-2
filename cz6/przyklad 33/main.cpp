#include <stdlib.h>
#include <iostream.h>
#include <math.h>
#include <conio.h>
//definiowanie funkcji

float f(float x)
 {
 return x*x;
 }
//rozpoczecie programu g³ównego
using namespace std;
int main(int argc, char *argv[])
{
 float x=5;
 int z=0; // zmienna zliczajaca iloœæ wierszy
 for(;x<=15;x=x+0.1)
 {
 z++;
 cout.precision(3);//okreœlenie miejsca po przecinku --> jedno
 cout<<"f("<<x<<")="; // tworzymy napisy f(x)
 cout.precision(4); //okreœlenie miejsca po przecinku --> dwa
 cout<<f(x)<<"\n"; //wypisujemy wartoœci funkcji f(x)
 if (z%22==0) //druk co 22 wiersze i pauza
 //poprzez sprawdzenie podzielnoœci licznika wierszy --> z przez 22
 {
 system("PAUSE");
 } 
 } 
 system("PAUSE");
 return EXIT_SUCCESS;
}


#include <stdlib.h>
#include <iostream.h>
#include <math.h>
#include <conio.h>
//definiowanie funkcji

float f(float x)
 {
 return x*x;
 }
//rozpoczecie programu g��wnego
using namespace std;
int main(int argc, char *argv[])
{
 float x=5;
 int z=0; // zmienna zliczajaca ilo�� wierszy
 for(;x<=15;x=x+0.1)
 {
 z++;
 cout.precision(3);//okre�lenie miejsca po przecinku --> jedno
 cout<<"f("<<x<<")="; // tworzymy napisy f(x)
 cout.precision(4); //okre�lenie miejsca po przecinku --> dwa
 cout<<f(x)<<"\n"; //wypisujemy warto�ci funkcji f(x)
 if (z%22==0) //druk co 22 wiersze i pauza
 //poprzez sprawdzenie podzielno�ci licznika wierszy --> z przez 22
 {
 system("PAUSE");
 } 
 } 
 system("PAUSE");
 return EXIT_SUCCESS;
}


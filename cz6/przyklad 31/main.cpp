#include <cstdlib>
#include <iostream>
using namespace std;
int potega(int a); //tutaj wypisujê instrukcjê nag³ówka funkcji potega() zakoñczon¹ œrednikiem
int liczba;
int main(int argc, char *argv[])
{
system("color f0");
cout<<"Podaj liczbê: ";
cin>>liczba;
cout<<"Potêga liczby "<<liczba<<" = "<<potega(liczba)<<endl; 
system("PAUSE");
return EXIT_SUCCESS;
}
int potega(int a) // zdefiniowanie funkcji potega()
{
return a*a;
}


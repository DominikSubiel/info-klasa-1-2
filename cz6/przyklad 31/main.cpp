#include <cstdlib>
#include <iostream>
using namespace std;
int potega(int a); //tutaj wypisuj� instrukcj� nag��wka funkcji potega() zako�czon� �rednikiem
int liczba;
int main(int argc, char *argv[])
{
system("color f0");
cout<<"Podaj liczb�: ";
cin>>liczba;
cout<<"Pot�ga liczby "<<liczba<<" = "<<potega(liczba)<<endl; 
system("PAUSE");
return EXIT_SUCCESS;
}
int potega(int a) // zdefiniowanie funkcji potega()
{
return a*a;
}


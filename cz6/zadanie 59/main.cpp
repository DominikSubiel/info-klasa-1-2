#include <cstdlib>
#include <iostream>
using namespace std;
int wartosc(int a); //tutaj wypisuj� instrukcj� nag��wka funkcji potega() zako�czon� �rednikiem
int liczba;
int main(int argc, char *argv[])
{
cout<<"Podaj liczb�: ";
cin>>liczba;
cout<<"Wartosc bezwzglenda podanej liczby  = "<<wartosc(liczba)<<endl; 
system("PAUSE");
return EXIT_SUCCESS;
}
int wartosc(int a)
{
return abs(liczba);
}


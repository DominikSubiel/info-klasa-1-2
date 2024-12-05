#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 int i=1, wynik=0, liczba;
 
 system("chcp 1250");
 system("cls");
 
 cout<<"Podaj liczbê: ";
 cin>>liczba;
 
 while(i<liczba)
 { 
 if(liczba%i==0)
 wynik=wynik+i;
 i++;
 }
 cout<<"Wynik = "<<wynik<<endl;
 system("PAUSE");
 return EXIT_SUCCESS;
}


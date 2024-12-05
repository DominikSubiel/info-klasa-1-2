/* Oto program pokazuj¹cy operacje wczytywania z klawiatury i obliczania wartoœci 
wyra¿enia */
#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
 system("chcp 1250");
 int a_sub,b_sub;
 float iloraz;
 
 cout<<"Podaj liczbê a:";
 cin>>a_sub;
 cout<<endl;
 cout<<"Podaj liczbê b:";
 cin>>b_sub;
 cout<<endl;
 
 cout<<"Suma="<<a_sub+b_sub;
 cout<<endl;
  cout<<endl;
 
  cout<<"Róznica="<<a_sub-b_sub;
 cout<<endl;
  cout<<endl;
 
  cout<<"Iloczyn="<<a_sub*b_sub;
 cout<<endl;
  cout<<endl;
 
  cout<<"Iloraz="<<1.0*a_sub/b_sub;
 cout<<endl;
  cout<<endl;
 
  cout<<"Reszta="<<a_sub%b_sub;
 cout<<endl;
  cout<<endl;
 
 system("PAUSE");
 return EXIT_SUCCESS;
}

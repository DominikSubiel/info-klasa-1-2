#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
	 system("chcp 1250");
	 printf("wprowadzam liczbê x w postaci dziesietnej\n");
     int x;
 cout<<"\npodaj liczbê x: ";
 cin>>x; 
 cout<<"\nwczytana liczba x= ";
printf("%c", x); 
cout<<" w formie szesnastkowej wynosi:";
printf("%x", x);
cout<<"\n\nliczba w formie ósemkowej wynosi:";
printf("%o", x);
 cout<<endl;

 system("PAUSE");
 return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
float a, sigma=0; 
 for (;;) // niesko�czona p�tla
 { 
 printf("\n Podaj liczbe do sumowania\n"); 
 scanf("%f", &a); 
 if (a==0) break; 
 if(a<0)continue;
 sigma+=a; // inaczej sigma = sigma + a;
 printf("\n SUMA CZESCIOWA: %f",sigma); 
 } 
 printf("Nastapil BREAK \n"); 
 system("PAUSE");
 return EXIT_SUCCESS;
}

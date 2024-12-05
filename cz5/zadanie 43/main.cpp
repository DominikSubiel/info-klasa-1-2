#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 int a[7];
 int i;
 int suma;
 int srednia;
 for( i=0;i<=6;i++)
 {
 cout<<"podaj A["<<i<<"]=";
 cin>>a[i]; // tu wprowadzamy liczby do kolejnych komórek
 }
 cout<<"suma elementow wczytanych do tablicy A jest rowna: "; 
 for(i=0;i<=6;i++)
 {
suma+=a[i];
 
 }
 suma=suma-1;
  cout<<suma<<"\n";
 srednia=suma/6;
 cout<<"srednia elementow wpiosanych do tablicy a jest rowna:"<<srednia<<"\n";
 
 system("PAUSE");
 return EXIT_SUCCESS;
}

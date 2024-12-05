#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 int a[7];
 int i;
 int iloczyn;
 for( i=0;i<=4;i++)
 {
 cout<<"podaj A["<<i<<"]=";
 cin>>a[i]; // tu wprowadzamy liczby do kolejnych komórek
 }
 cout<<"iloczyn wczytanego ciagu 5 elementowego wynolsi: "; 
 for(i=0;i<=4;i++)
 {
iloczyn*=a[i];
 
 }
  cout<<iloczyn<<"\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}

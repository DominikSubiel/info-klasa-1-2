#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	system("chcp 1250");
 int n;
 long double fab[100000]; // wczytywane s¹ d³ugie liczby - typ zmien. o wysok. pojemnosci 
 
 cout << "Podaj który element ciagu chcesz wyœwietliæ: \n";
 cin>>n;
 
 fab[0]=1;
 fab[1]=1;
 cout<<"1 wyraz ci¹gu Fibonacciego wynosi: " <<fab[0]<<"\n"; 
 cout<<"2 wyraz ci¹gu Fibonacciego wynosi: " <<fab[1]<<"\n"; 
 for (int i=2; i<n; i++)
 {
 fab[i]=fab[i-1]+fab[i-2];
cout<<i+1<<" wyraz ci¹gu Fibonacciego wynosi: " <<fab[i]<<"\n"; 
 } 

cout<<"z³ota liczba wynosi wyraz ci¹gu Fibonacciego wynosi: " <<fab[n-1]/fab[n-2]<<"\n"; 
 

 system("PAUSE");
 return EXIT_SUCCESS;
}


#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 int n;
 long double fab[100000]; // wczytywane s� d�ugie liczby - typ zmien. o wysok. pojemnosci 
 
 cout << "Podaj kt�ry element ciagu chcesz wy�wietli�: \n";
 cin>>n;
 
 fab[0]=1;
 fab[1]=1;
 
 for (int i=2; i<n; i++)
 {
 fab[i]=fab[i-1]+fab[i-2]; // wyraz kolejny jest sum� dw�ch poprzednich liczb 
 } // wczytywanie liczb Fabonacciego do tablicy 
 cout<<n<<" wyraz ci�gu Fibonacciego wynosi: " <<fab[n-1]<<"\n"; 
 // wywo�anie konkretnego elementu tablicy Fibonacciego
 system("PAUSE");
 return EXIT_SUCCESS;
}


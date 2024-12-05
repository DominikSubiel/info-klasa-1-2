//przekazywanie przez wartoœci
#include <cstdlib>
#include <iostream>
using namespace std;
void wartosc(int x);
void referencja(int &x);
int main(int argc, char *argv[])

{ 
system("chcp 1250");
 int x=10;
 wartosc(x);
 cout<<"\n";
 cout<<"na zewn¹trz funkcji x="<<x<<endl;
cout<<"\n";
 referencja(x);
 cout<<"\n";
 cout<<"na zewn¹trz funkcji x="<<x<<endl;
 system("PAUSE");
 return EXIT_SUCCESS;
}
void wartosc (int x)
{
 x = 2*x;
 cout<<"wewn¹trz funkcji x="<<x<<endl;
}

void referencja (int &x)
{
	
 x = 2*x;
 cout<<"wewn¹trz funkcji x="<<x<<endl;
}


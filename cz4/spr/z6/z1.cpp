#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
 int numer;
 int kwadrat;
 int szescian;
 cout<<"podaj numer w dzienniku";
 cin>>numer;
for(int koniec=numer+15;koniec>=numer;numer++)
{
	kwadrat= numer*numer;
    szescian=numer*numer*numer;
	cout<<"I="<<numer<<"  ";
	cout<<"I*I="<<kwadrat<<"  ";
	cout<<"I*I*I="<<szescian<<endl;
}
 system("PAUSE");
 return EXIT_SUCCESS;
}

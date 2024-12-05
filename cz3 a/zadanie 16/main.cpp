#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) 
{ 
int n,m;
system ("chcp 1250");
system ("cls");
cout<<"podaj pierwsza liczbe n="<<endl;
cin>>n;
cout<<"podaj druga liczbe mniejsza lub rowna pierwszej m="<<endl;
cin>>m;
while (n!=m)
{ 
   if (n>m)
{
   n=n-m;
}
else
{
	m=m-n;
}
}
cout<<"NWD="<<n<<endl;
	return 0;
}

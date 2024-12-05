#include <iostream>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	system ("chcp 1250");
	int n;
	int a[n];
	int i;
	int n1=0;
	int SCHOWEK;
krok1:	
	cout<<"Podaj iloœæ elementów tablicy a:";
	cin>>n;	
	if(n>=11 or n<=0)
	{
	cout<<"Tablica musi zawieraæ minimum 1 a maksimum 10 elementów !\n";
	goto krok1;
	}
	
	for( i=0;i<=(n-1);i++)
 	{
 	cout<<"podaj A["<<i<<"]=";
 	cin>>a[i]; 
 	}
 	cout<<"\nOdwrócona tablica:\n";
 	for(int i=n-1;i>=0;i--)
	 {
 		cout<<"A=["<<n1<<"]="<<a[i]<<"\n";
 		n1++;
	 }
	
	return 0;
}



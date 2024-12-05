#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int dol;
	int gora;
	cout<<"Podaj liczbe dolna:";
	cin>>dol;
	cout<<"Podaj liczbe gorna:";
	cin>>gora;
	
		
	if(dol<=1||gora<=1)
	{
		cout<<"Liczba mniejsza lub rowna 1";
        goto krok1;
        
	}
	cout<<"\nLiczby zaprzyjaznione z przedzialu od "<<dol<<" do "<<gora<<" to:";
	
krok1:	return 0;
}

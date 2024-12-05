#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[]){
	
	int m;
	cout<<"Podaj miesiac twojego urodzenia:";
	cin>>m;
    int m1=m+30;
	krok1:
	for(;m1>=m;)
	{
		if(m%2==0)
		{
			cout<<m<<" ";
			m=m+2;
			goto krok1;
			
		}
		else
		{
			m++;
			goto krok1;
		}
	}
return 0;
}



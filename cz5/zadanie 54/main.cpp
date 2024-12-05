#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	system("chcp 1250");
	system("CLS");
int t[7];
int bufor;
cout<<"Wprowadzanie przez wstawianie\n";
	
	for( int i=0;i<7;i++)
 	{
 	cout<<"podaj element tablicy:["<<i<<"]=";
 	cin>>t[i]; 
	}
cout<<"\nwygl¹d wprowadzonej tablicy tab [";
	for(int i=0;i<7;i++)
	{
	cout<<t[i]<<" ";
	}
cout<<"]\n";





	for (int i=0;i<7;i++){
	bufor=t[i];
	int j=i-1;
	while(j>=0&&t[j]>bufor){
	t[j+1]=t[j];
	j--;	
	}
	t[j+1]=bufor;
}

		
	
cout<<"\nposortowana tablica wygl¹da nastêpuj¹co: tab[";

for(int i=0;i<7;i++)
{
cout<<t[i]<<" ";
}
cout<<"]";
return 0;
}


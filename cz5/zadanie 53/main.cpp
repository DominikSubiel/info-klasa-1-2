#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	system("chcp 1250");
	system("CLS");
int t[7];
int bufor;
int min;
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


	for (int i=0;i<6;i++){
	min=i;
	for (int j=i+1;j<7;j++){
	if(t[j]<t[min]){
		min=j;
	}
		
	}
	bufor=t[min];
	t[min]=t[i];
	t[i]=bufor;
	}	
cout<<"\nposortowana tablica wygl¹da nastêpuj¹co: tab[";

for(int i=0;i<7;i++)
{
cout<<t[i]<<" ";
}
cout<<"]";
return 0;
}


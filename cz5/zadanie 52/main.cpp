#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int t[7];
int SCHOWEK;
int zamiana;
	for( int i=0;i<7;i++)
 	{
 	cout<<"podaj t["<<i<<"]=";
 	cin>>t[i]; 
	}
cout<<"\nPodana tablica:\n";
	for(int i=0;i<7;i++)
	{
	cout<<t[i]<<" ";
	}
	for (int j=0;j<7;j++)
for (int i=0;i<6;i++){
	if(t[i]>t[i+1]){
	SCHOWEK=t[i];
	t[i]=t[i+1];
	t[i+1]=SCHOWEK;  
	}	
}
cout<<"\nPosortowana tablica:\n";

for(int i=0;i<7;i++)
{
cout<<t[i]<<" ";
}
return 0;
}


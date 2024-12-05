#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{
 int t[5][5];
 int e=1;
 
 for(int i=0;i<5;i++){
 	
 	for(int j=0;j<5;j++){
 	
 		if(i==j) {t[i][j]=9;
 	
 		}
 		else{
 			t[i][j]=e;
 			
		 }
		 
 	}
 	e++;
 } 
 
 for(int i1=0;i1<5;i1++)
 {
 for(int j1=0;j1<5;j1++)
 {
 cout<<t[i1][j1]<<" ";
 }
 system("PAUSE"); 
 } 

return 0;
}

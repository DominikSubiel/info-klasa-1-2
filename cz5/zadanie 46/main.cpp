#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 int a[7];
 int i;
 int zero=0;
 int dodatnia=0;
 int ujemna=0;
 for( i=0;i<=7;i++)
 {
 cout<<"podaj A["<<i<<"]=";
 cin>>a[i]; 
 if(a[i]>0){
	dodatnia++;
}
 else if(a[i]==0)
 {
 	zero++;
 }
 else
 {
 	ujemna++;
 }
 }

  cout<<"liczba wyrazow ciagow ktore sa wieksze od zera wynosi: "<<dodatnia<<endl; 
   cout<<"liczba wyrazow ciagow ktore sa rowne od zera wynosi: "<<zero<<endl; 
    cout<<"liczba wyrazow ciagow ktore sa mniejsze od zera wynosi: "<<ujemna<<endl; 
 system("PAUSE");
 return EXIT_SUCCESS;
}

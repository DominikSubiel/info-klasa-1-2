#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 int S=0, n;
 
 cout<<"POdaj n= ";
 cin>>n;
 
 while(n>0)
 {
 S=S+(n%10);
 n=n/10;
 } 
 
 if(S%3==0)
 cout<<"TAK"<<endl;
 else
 cout<<"NIE"<<endl;
 
 system("PAUSE");
 return EXIT_SUCCESS;
}


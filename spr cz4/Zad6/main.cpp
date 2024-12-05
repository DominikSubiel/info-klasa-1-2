#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int i;
	float p2;
    float p4;
    
   
    
    for(i=25;i<=40;i++)
{
	 p2=sqrt(i);
    p4=sqrt(p2);
	cout<<"I= "<<i<<"   "<<"pier_2 ("<<i<<")="<<p2<<"   "<<"pierw_4("<<i<<")="<<p4;
	cout<<endl;
}
	return 0;
}

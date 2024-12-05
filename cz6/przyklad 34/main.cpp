#include <cstdlib>
#include <iostream>
#include <math.h>
#define H 10.0
#define R 5.0
12
Opracowanie: mgr in¿. Andrzej Rawa oraz mgr in¿. Marek Kryniewski
float v(float h,float r)
 {
 return M_PI*r*r*h;
 }
float Pc(float h,float r)
 {
 return(2*M_PI*r*r+2*M_PI*r*h);
 } 
using namespace std;
int main(int argc, char *argv[])
{
 cout<<"H="<<H<<"cm\tr="<<R<<"cm\n";
 cout<<"V("<<H<<","<<R<<")=\t"<<v(H,R)<<"cm^3\n";
 cout<<"Pc("<<H<<","<<R<<")=\t"<<Pc(H,R)<<"cm^2\n";
 float h,r;
 cout<<"Podaj r=";
 cin>>r;
 cout<<"Podaj H=";
 cin>>h;
 cout<<"V("<<h<<","<<r<<")=\t"<<v(h,r)<<"cm^3\n";
 cout<<"Pc("<<h<<","<<r<<")=\t"<<Pc(h,r)<<"cm^2\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}

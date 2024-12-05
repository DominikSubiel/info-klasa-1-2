#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{   system ("chcp 1250");
    float const PI_sub=3.14159;
    float rad_sub, stopnie_sub;
    cout<<"Podaj wartoœæ stopni:";
    cin>>stopnie_sub;
    rad_sub=stopnie_sub*PI_sub/180;
    cout<<endl;
    cout<<stopnie_sub<<"stopnie="<<rad_sub<<"rad";
}

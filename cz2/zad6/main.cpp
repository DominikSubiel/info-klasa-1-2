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
    cout<<"Podaj wartoœæ radianów:";
    cin>>rad_sub;
    stopnie_sub=rad_sub*180/PI_sub;
    cout<<endl;
    cout<<rad_sub<<"rad="<<stopnie_sub<<"stopnie";
}

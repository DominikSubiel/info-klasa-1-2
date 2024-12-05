#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
COORD coord;
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);	
}

int main() {
int numer,wiersz,kolumna;
cout<<"Podaj numer w dzienniku:";
cin>>numer;

wiersz=5+numer%3;
kolumna=11+numer%2;

cout<<"Wiersz:"<<wiersz;
cout<<"\nKolumna:"<<kolumna;

int i1=kolumna;
int i2=kolumna;
int k1=wiersz+1;
int k2=wiersz;

for(int l=0; l<=5;i1--,l++)
{
	gotoxy(i1,wiersz);
	cout<<"*";
}
for(int l=0; l<=3;k1++,l++)
{
	gotoxy(kolumna,k1);
	cout<<"*";
}
for(int l=0; l<=5; i2--,l++)
{
	gotoxy(i2,wiersz+5);
	cout<<"*";
}
for(int l=0; l<=5;k2++,l++)
{
	gotoxy(kolumna-5,k2);
	cout<<"*";
}
    return 0;
}


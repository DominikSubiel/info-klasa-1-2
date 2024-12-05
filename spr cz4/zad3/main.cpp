#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void gotoxy(int x,int y){
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main(int argc, char** argv) {
int miesiac;
int numer;
cout<<"Podaj twoj numer w dzienniku:";
cin>>numer;
cout<<"Podaj twoj miesiac urodzenia:";
cin>>miesiac;

cout<<"szerokosc="<<miesiac;
cout<<"\nwysokosc="<<numer;

int s=miesiac;
int w=numer;
for(int i=1;i<=s;i++){
	gotoxy(i+30,6);
	cout<<"*";
}
for(int i=0;i<w;i++){
	gotoxy(60,i-w);
	cout<<"*";
}

for(int i=1;i<=s;i++){
	gotoxy(i+30,w);
	cout<<"*";
}
for(int i=0;i<w;i++){
	gotoxy(60+s,i-w);
	cout<<"*";
}
return 0;
}


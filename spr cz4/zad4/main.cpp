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
for(int i=0;i<=9;i++){
gotoxy(0,8);
cout<<"*********";
}

for(int i=0;i<=7;i++){
	gotoxy(i,i);
	cout<<"*";
}
cout<<"\n";
		return 0;
}

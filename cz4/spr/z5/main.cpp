#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(int argc, char *argv[])
{
	int lewo=90;
 for (int i=0;i<=20;i++)
 {
 	 gotoxy(lewo--,i);
 cout<<"Subiel"<<"\n";
 }
 system("PAUSE");
 return EXIT_SUCCESS;
}

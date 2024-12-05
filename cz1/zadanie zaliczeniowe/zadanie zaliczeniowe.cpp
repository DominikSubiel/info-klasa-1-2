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
int main()

{
 gotoxy(50,70);
cout<<"  "<<"\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8|
FOREGROUND_INTENSITY); 
cout<<"          ____________"<<"\n"; 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12|
FOREGROUND_INTENSITY); 
cout<<"       ________I________________[X]"<<"\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11|
FOREGROUND_INTENSITY); 
cout<<"      /   |    |_|      /                   "<<"\n";
cout<<"    _|____|            /             "<<"\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14|
FOREGROUND_INTENSITY); 
cout<<"   \\_________________/             "<<"\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8|
FOREGROUND_INTENSITY); 
cout<<"   \\____I______I___                "<<"\n";
 
cout<<endl;
 system("pause");
}


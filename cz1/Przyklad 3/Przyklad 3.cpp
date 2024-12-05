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
 cout << "Tekst nie kolorowany\n\n"; 
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 
FOREGROUND_GREEN | FOREGROUND_INTENSITY); 
 cout << "Tekst pokolorowany\n\n"; 
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
 // 15 to kolor bialy
 cout << "Tekst nie kolorowany\n\n"; 
 gotoxy(10,10);
 cout<<"K";
 cout<<endl;
 system("pause"); 
}

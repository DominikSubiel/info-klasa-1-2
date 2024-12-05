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
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14|
FOREGROUND_INTENSITY); 
cout<<"                            "<<"\n";
cout<<"          __                "<<"\n";
cout<<"          {}               "<<"\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10|
FOREGROUND_INTENSITY); 
cout<<"          /\\           "<<"\n";
cout<<"         /  \\          "<<"\n";
cout<<"        /    \\         "<<"\n";
cout<<"       /";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9|
FOREGROUND_INTENSITY);  
cout<<" O";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10|
FOREGROUND_INTENSITY);  
cout<<"    \\        "<<"\n";
cout<<"      /        \\       "<<"\n"; 
cout<<"     /";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11|
FOREGROUND_INTENSITY); 
cout<<"  O";      
cout<<"   O";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10|
FOREGROUND_INTENSITY); 
cout<<"   \\      "<<"\n";
cout<<"    /";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12|
FOREGROUND_INTENSITY);
cout<<"_-_-_-_-_-__";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10|
FOREGROUND_INTENSITY);
cout<<"\\     "<<"\n";
cout<<"     /"; 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6|
FOREGROUND_INTENSITY);     
cout<<"  O";  
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10|
FOREGROUND_INTENSITY); 
cout<<"       \\      "<<"\n";
cout<<"    /            \\     "<<"\n";
cout<<"   /";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8|
FOREGROUND_INTENSITY);
cout<<"-_-_-_-_-_-_-_";

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10|
FOREGROUND_INTENSITY);cout<<"\\    "<<"\n";
cout<<"  /__  ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12|
FOREGROUND_INTENSITY); 
cout<<"O";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10|
FOREGROUND_INTENSITY);        
cout<<"         __\\   "<<"\n";
cout<<"   /              \\    "<<"\n"; 
cout<<"  / ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13|
FOREGROUND_INTENSITY); 
cout<<" O";
cout<<"            O";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10|
FOREGROUND_INTENSITY); 
cout<<"\\   "<<"\n";
cout<<" /__________________\\  "<<"\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15|
FOREGROUND_INTENSITY); 
cout<<"        |    |          "<<"\n";
cout<<"     ___|____|___          "<<"\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5|
FOREGROUND_INTENSITY); 
cout<<"    |____________|";
cout<<endl;
 system("pause");
}


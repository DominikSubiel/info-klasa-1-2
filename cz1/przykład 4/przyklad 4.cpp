#include <windows.h> 
#include <iostream> 
#include <stdlib.h> 
using namespace std; 
int main() 
{ 
HANDLE hOut; 
hOut = GetStdHandle(STD_OUTPUT_HANDLE); 
cout << "Standart" << endl << endl; 
SetConsoleTextAttribute(hOut,BACKGROUND_RED); 
cout << "czerwony." << flush << endl << endl; 
SetConsoleTextAttribute(hOut,FOREGROUND_GREEN); 
cout << "zielony." << endl << endl; 
SetConsoleTextAttribute(hOut,FOREGROUND_BLUE); 
cout << "niebieski." << endl << endl; 
system("PAUSE"); 
return 0; 
} 

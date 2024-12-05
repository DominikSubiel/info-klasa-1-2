#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(int argc, char *argv[]) {

    for (int i = 0; i <= 22; i++) {
        gotoxy(40, i);
        cout << "*" << "\n";
    }

 
    for (int i = 0; i <= 80; i++) {
        gotoxy(i, 10);
        cout << "*";
    }
cout<<"\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}


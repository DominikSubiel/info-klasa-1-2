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
     int bok = 20;

    for (int i = 0; i < bok; i++) {
        gotoxy(i, i);
        cout << "*";
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}


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
    const int bok = 20;

    for (int i = 0; i < bok; i++) {
        gotoxy(bok - i - 1, i);
        cout << "*";
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}


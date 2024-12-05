#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
using namespace std; 
int main(int argc, char** argv) 
{ 
system ("chcp 1250");
system("cls");
    float A, B, C;
    do {
        cout << "Podaj wartoœæ wspó³czynnika A: ";
        cin >> A;
    } while (A == 0);

    cout << "Podaj wartoœæ wspó³czynnika B: ";
    cin >> B;
    cout << "Podaj wartoœæ wspó³czynnika C: ";
    cin >> C;

    float delta = B * B - 4 * A * C;

    if (delta > 0) {
        float x1 = (-B - sqrt(delta)) / (2 * A);
        float x2 = (-B + sqrt(delta)) / (2 * A);
        cout << "To równanie ma dwa pierwiastki rzeczywiste:";
        cout << "X1 = " << x1 << " oraz X2 = " << x2 << endl;
    } else if (delta == 0) {
        float x = -B / (2 * A);
        cout << "To równanie ma jeden pierwiastek rzeczywisty:" << endl;
        cout << "X0 = " << x << endl;
    } else {
        cout << "To równanie nie ma pierwiastków rzeczywistych." << endl;
    }

    cout << "Delta = " << delta << endl;

    return 0;
}

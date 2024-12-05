#include <iostream>
#include <vector>

float obliczFunkcje(float x) {
    return x * x;
}
using namespace std; 
int main(){

system ("chcp 1250");
system("cls"); {
    vector<float> x_values;
    vector<float> y_values;

    char wybor;

    do {
        float x, y;

        cout << "Podaj liczbê x: ";
        cin >> x;

        y = obliczFunkcje(x);

        cout << "\nf(x) = " << y << endl;

        x_values.push_back(x);
        y_values.push_back(y);

        cout << "Jeœli chcesz powtórzyæ program wciœnij klawisz d.\nW przeciwnym wypadku wciœnij dowolny inny klawisz literowy.\n";
        cin >> wybor;
    } while (wybor == 'd' || wybor == 'D');

    return 0;
}
}

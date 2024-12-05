#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{   system("chcp 1250");
    system("cls");
    SetConsoleTitle("STRINGI");

    string imie, nazwisko;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0|
BACKGROUND_INTENSITY);

    cout << "\nPodaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;

    cout <<"\nNazywasz siê"<<" "<< imie <<" "<< nazwisko<<endl;
    cout << "\nTwoje imie ma " << imie.length() <<" liter, a nazwisko " << nazwisko.length() <<" "<<"liter"<< endl;
    cout<<"\n£¹cznie Twoje dane maj¹"<<" "<<imie.length()+nazwisko.length()<<" "<<"liter"<<endl;
	cout << "\nTwoje inicjaly to: " << imie[0] << nazwisko[0] << endl;

    return 0;
}

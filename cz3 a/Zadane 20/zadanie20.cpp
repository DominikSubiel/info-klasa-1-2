#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
using namespace std; 
int main(int argc, char** argv) 
{ 
system ("chcp 1250");
system("cls");
char wybor;


    do 
	{
        float bok, pole;

        cout << "Podaj bok kwadratu w centymetrach: ";
        cin >> bok;
        cout<<"\n";
        if (bok > 0) 
		{
            pole = bok * bok;
            cout << "Pole kwadratu ="<< pole <<"cm^2"<< endl;
        } 
        
		else 
		{
          cout << "Bok nie mo�e by� r�wny zero" << endl;
        }

        cout << "je�li powt�rzy� program wci�nij t(tak)\nw przeciwym wypadku wci�nij dowolny klawisz literowy\n\n ";
        cin >> wybor;
    } 
	while (wybor == 't' || wybor == 'T');
    return 0;
    
}



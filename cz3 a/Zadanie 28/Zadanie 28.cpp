#include <iostream>
#include <cstdlib>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char *argv[])
{
	system("chcp 1250");
	system("cls");
	
	cout<<"Dzieñ dobry\n\n";
	goto pytanie_23;

	tutaj_23:// Etykieta tutaj
	cout<<"jestem u góry\n";
	
	
	pytanie_23: // Etykieta pytania
	cout << "jeœli chcesz skoñczyæ wciœnij klawisz y lub Y\n ";
	cout<<"podaj jakis znak:";
	getch();
	char wybor;
	cin >> wybor;
	if(wybor == 'y' || wybor == 'Y')
	{
		goto koniec_23;
	}
	
	
	else
	{
		cout<<"jestem na dole\n";
		goto tutaj_23;
	}
koniec_23:// Etykieta koniec
 system("PAUSE");
 return EXIT_SUCCESS;}

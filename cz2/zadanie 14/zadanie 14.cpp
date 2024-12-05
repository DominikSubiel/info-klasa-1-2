#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {
	
	system("Chcp 1250");
	system("cls");

	int SubRok, SubWiek, SubUro, SubRoz;
    float Imie, Nazwisko;
    printf("Jak masz na imie: ");
	scanf("%s", &Imie);
	
	printf("Podaj swoje nazwisko: ");
	scanf("%s", &Nazwisko);
	
	
	printf("Ile masz lat: ");
	scanf("%d", &SubWiek);
	
	printf("Podaj aktualny rok: ");
	scanf("%d", &SubRok);

	SubUro = SubRok - SubWiek;
	SubRoz = SubUro + 7;

	printf("Data rozpoczecia pierwszej nauki w szkole to:%d\n", SubRoz);
    printf("Twoja data urodzenia to: %d\n", SubUro);
	getch();
	return 0;
}

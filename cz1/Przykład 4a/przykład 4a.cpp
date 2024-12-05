#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
void gotoxy(int x, int y ); // Deklaracja funkcji, informujemy kompilator, �e taka funkcja 
istnieje
using namespace std;
int main()
{
 cout << "Dzialanie funkcji gotoxy - punkt pocz�tkowy (0,0)";
 gotoxy(15,5); /* Odwo�ujemy si� do funkcji gotoxy z dwoma parametrami, 15 i 5
 po wykonaniu kodu znajduj�cego si� w gotoxy kursor przemie�ci si� do 
punktu (15,5)*/
 cout << " Nowy punkt (15,5) - Teraz kursor konsoli jest tutaj";
 getch(); // a to jest oczekiwanie na wcisniecie jakiegos przycisku
}
/* void mo�na t�umaczy� jako pusty, co skutkuje tym �e funkcja w przeciwnie�stwie do int 
nie zwraca �adnej warto�ci. W �rodku deklarujemy 2 zmienne x i y do kt�rych przekazujemy 
2 warto�ci w funkcji main za pomoc� gotoxy(15,5) pierwsza liczba w odwo�aniu b�dzie 
zapisana jako x a druga jako y */
 
void gotoxy( int x, int y ) 
{
 COORD coord; // tutaj deklarujemy strukture coord, i zmienna coord b�dzie mog�a przechowywa� wsp�rz�dne, tutaj 2 zmienne X i Y
 coord.X = x; // tutaj do zmiennej coord.X zapisujemy nasze x w naszym przypadku jest to 
15
 coord.Y = y; // tak samo jak wy�ej tylko do coord.Y i tutaj jest to 5
 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord ); 
/* pierwszy parametr to uchwyt do urz�dzenia do kt�rego si� odwo�uje czyli w tym 
przypadku jest to bufor konsoli a drugi parametr to wspolrz�dne nowej pozycji kursora. */
}


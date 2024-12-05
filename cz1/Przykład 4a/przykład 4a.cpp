#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
void gotoxy(int x, int y ); // Deklaracja funkcji, informujemy kompilator, ¿e taka funkcja 
istnieje
using namespace std;
int main()
{
 cout << "Dzialanie funkcji gotoxy - punkt pocz¹tkowy (0,0)";
 gotoxy(15,5); /* Odwo³ujemy siê do funkcji gotoxy z dwoma parametrami, 15 i 5
 po wykonaniu kodu znajduj¹cego siê w gotoxy kursor przemieœci siê do 
punktu (15,5)*/
 cout << " Nowy punkt (15,5) - Teraz kursor konsoli jest tutaj";
 getch(); // a to jest oczekiwanie na wcisniecie jakiegos przycisku
}
/* void mo¿na t³umaczyæ jako pusty, co skutkuje tym ¿e funkcja w przeciwnieñstwie do int 
nie zwraca ¿adnej wartoœci. W œrodku deklarujemy 2 zmienne x i y do których przekazujemy 
2 wartoœci w funkcji main za pomoc¹ gotoxy(15,5) pierwsza liczba w odwo³aniu bêdzie 
zapisana jako x a druga jako y */
 
void gotoxy( int x, int y ) 
{
 COORD coord; // tutaj deklarujemy strukture coord, i zmienna coord bêdzie mog³a przechowywaæ wspó³rzêdne, tutaj 2 zmienne X i Y
 coord.X = x; // tutaj do zmiennej coord.X zapisujemy nasze x w naszym przypadku jest to 
15
 coord.Y = y; // tak samo jak wy¿ej tylko do coord.Y i tutaj jest to 5
 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord ); 
/* pierwszy parametr to uchwyt do urz¹dzenia do którego siê odwo³uje czyli w tym 
przypadku jest to bufor konsoli a drugi parametr to wspolrzêdne nowej pozycji kursora. */
}


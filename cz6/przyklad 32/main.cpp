#include <cstdlib>
#include <iostream>
using namespace std;
void gwiazdki(void); // uprzedzam kompilator ->funkcja gwiazdki b�dzie p�niej
int main(int argc, char *argv[])
{ 
 gwiazdki();
 cout<<"\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}
void gwiazdki (void)
{
 cout<<"****************"; /* funkcja kt�ra nie przypisuje �adnej warto�ci jest typu 
pustego czyli void - nie musi zawiera� polecenia return.*/
}

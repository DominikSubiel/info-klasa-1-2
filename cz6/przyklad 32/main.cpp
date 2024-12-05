#include <cstdlib>
#include <iostream>
using namespace std;
void gwiazdki(void); // uprzedzam kompilator ->funkcja gwiazdki bêdzie pó¿niej
int main(int argc, char *argv[])
{ 
 gwiazdki();
 cout<<"\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}
void gwiazdki (void)
{
 cout<<"****************"; /* funkcja która nie przypisuje ¿adnej wartoœci jest typu 
pustego czyli void - nie musi zawieraæ polecenia return.*/
}

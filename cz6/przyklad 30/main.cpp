#include <cstdlib>
#include <iostream>
using namespace std;
void kwadrat(void); 
void trojkat(void);// uprzedzam kompilator ->funkcja gwiazdki bêdzie pó¿niej
int main(int argc, char *argv[])
{ 
 kwadrat();
 cout<<"\n";
 trojkat();
 cout<<"\n";
 kwadrat();
 cout<<"\n";
 trojkat();
 cout<<"\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}
void kwadrat (void)
{
 cout<<"******\n";
 cout<<"*    *\n";
 cout<<"*    *\n";
 cout<<"*    *\n";
 cout<<"******\n"; 
}
void trojkat (void)
{
 cout<<"   *\n";
 cout<<"  * *\n";
 cout<<" *   *\n";
 cout<<"*******\n"; 
}

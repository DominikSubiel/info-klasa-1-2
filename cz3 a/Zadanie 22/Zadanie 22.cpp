#include <iostream>
#include <cctype>
using namespace std; 
int main(int argc, char** argv) 
{ 
system ("chcp 1250");
system("cls");
    char a, b;

    cout << "Prosze podaæ pierwsz¹ literê kodu:\n ";
    cin >> a;

    cout << "Prosze podaæ drug¹ literê kodu:\n ";
    cin >> b;

    cout << "Podany kod to: "<<a<<b<<"\n"; 
 if (a == 'd'||a=='D' && b == 's'||b=='S') 
	{
        cout << "DZIEÑ DOBRY" << endl;
    } else 
	{
        cout << "¯EGNAJ" << endl;
    }
}

  

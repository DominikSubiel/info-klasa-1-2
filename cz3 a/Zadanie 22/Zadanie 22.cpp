#include <iostream>
#include <cctype>
using namespace std; 
int main(int argc, char** argv) 
{ 
system ("chcp 1250");
system("cls");
    char a, b;

    cout << "Prosze poda� pierwsz� liter� kodu:\n ";
    cin >> a;

    cout << "Prosze poda� drug� liter� kodu:\n ";
    cin >> b;

    cout << "Podany kod to: "<<a<<b<<"\n"; 
 if (a == 'd'||a=='D' && b == 's'||b=='S') 
	{
        cout << "DZIE� DOBRY" << endl;
    } else 
	{
        cout << "�EGNAJ" << endl;
    }
}

  

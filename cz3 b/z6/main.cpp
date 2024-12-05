#include <iostream>
using namespace std;

int main() {
    int i=1;
    int potega=1;
    int n, k;

    cout << "Podaj liczbe n: ";
    cin >> n;
    cout << "Podaj liczbe k: ";
    cin >> k;
    do{
    	potega=potega*n;
     i++;
	
	}while(i<=k);
cout << "wynik " << potega << endl;
 return 0;
}


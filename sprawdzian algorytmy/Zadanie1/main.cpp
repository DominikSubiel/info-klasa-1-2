#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	system("chcp 1250");
	system("cls");
	
	int M=0, i=0, liczba;
	
	while(i<10)
	{
		cout<<"Podaj liczbe= ";
		cin>>liczba;
		
		if(liczba>M)
		M=liczba;
		i++; 
	}
	cout<<"wartosc m wynosi:"<<M<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

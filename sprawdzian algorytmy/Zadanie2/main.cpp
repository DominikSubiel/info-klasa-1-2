#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	int x;
	char znak;
	
krok1:do
{	
    cout<<"Witaj u�ytkowniku"<<endl;
	cout<<"Podaj wartosc x= ";
	cin>>x;
}
while(x<=(-5)||x>=3);

cout<<"Chcesz zako�czyc program? jezeli tak wpisz <t>";
cin>>znak;
if(znak='t')
{
goto krok1;
}
else{
cout<<"Czy jeste� tego pewny na 100%? jezeli tak wpisz <t>";
cin>>znak;}
if(znak='t')
{
goto krok1;	
}
else{
	return 0;	
}
}

#include <iostream>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	system ("chcp 1250");
	int skoki;
	int okres_min, okres_max;
	bool zdane;
	cout<<"podaj ilosc skokow narciarskich odnotowanych przez trenera:"<<endl;
	cin>>skoki;
	
	int tab[skoki];
	
	cout<<"podaj jakie wyniki skokow uzyskal zawodnik: (liczby rozdziel enterem):"<<endl;
	for(int i=0;i<skoki;i++){
		cin>>tab[i];
	}
	
	cout<<"podaj dlugosc sprawdzanego okresu (liczby rozdziel enterem):"<<endl;
	cin>>okres_min;
	cin>>okres_max;
	
	for(int i=okres_min; i<okres_max;i++){
		if(tab[i]>tab[i])
		zdane=true;
		else
		zdane=false;
	}
	if(zdane)
	cout<<"mozesz jechac na zawody";
	else
	cout<<"musisz zjesc wiecej bananow";
	return 0;
}

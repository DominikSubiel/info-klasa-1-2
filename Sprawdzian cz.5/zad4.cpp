#include <iostream>
#include<cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	int miesiac;
	int e=0;
	
	cout<<"Podaj miesiac Twojego urodzenia=";
	cin>>miesiac;
	int macierz_ds[miesiac+3];
	for(int i=4;i<miesiac+7;i++){
		cout<<"\nmacierz_DS["<<e<<"]="<<i;
		macierz_ds[e]=i;
		e++;
	}
	return 0;
}

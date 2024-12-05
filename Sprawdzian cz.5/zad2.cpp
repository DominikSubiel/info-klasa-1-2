#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int ds[4][2];
	
	cout<<"Do tablicy wpisujemy tylko liczby parzyste!\n";
	
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			start:
			cout<<"Podaj element macierzy DS["<<i<<"]["<<j<<"]=";
			cin>>ds[i][j];
			if(ds[i][j]%2!=0){
				cout<<"liczba musi byc parzysta\n";
				goto start;
			}
				else continue;
			}
			
		
			
		}
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			cout<<ds[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}

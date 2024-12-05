#include <iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char** argv) {
	int d[3][2],e[3][2],g[3][2], sm,bg,eq;
	
	//Podawanie wartoœci tablic
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<"\nPodaj  element macierzy D["<<i<<"]["<<j<<"]=";
			cin>>d[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<"\nPodaj  element macierzy E["<<i<<"]["<<j<<"]=";
			cin>>e[i][j];
		}
	}
	
	//Wyœwietlanie tablic
	cout<<"Macierz D wyglada nastepujaco:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<d[i][j]<<"\t";
			
		}
		cout<<"\n";
	}
	
	cout<<"Macierz E wyglada nastepujaco:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<e[i][j]<<"\t";
			
		}
		cout<<"\n";
	}
	
	//Obliczanie macierzy G
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			g[i][j]=(4*e[i][j])-(2*d[i][j]);
			if(g[i][j]<2){
				sm++;
			}
			if(g[i][j]==2){
				eq++;
			}
			if(g[i][j]>2){
				bg++;
			}
		}
	}
	if(bg>eq && bg>sm)bg--;
	if(sm>eq && sm>bg)sm--;
	if(eq>sm && eq>bg)eq--;
	//Wyœwietlanie macierzy G
	cout<<"Macierz G wyglada nastepujaco:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<g[i][j]<<"\t";
			
		}
		cout<<"\n";
	}
	
	//Wyœwietlanie liczb wiêkszych i mniejszych ni¿ 2
	cout<<"\nliczb wiekszych od 2="<<bg;
	cout<<"\nliczb rownych 2="<<eq;
	cout<<"\nliczb mniejszych od 2="<<sm;
	
	return 0;
}

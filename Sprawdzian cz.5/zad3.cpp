#include <iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char** argv) {
	int ufo_ds[7];
	float sigma=0;
	//Wczytywanie tablicy
	for(int i=0;i<7;i++){
		cout<<"Podaj element tablicy UFO_DS["<<i<<"]=";
		cin>>ufo_ds[i];
	}
	
	//Obliczanie sumy
	
		for(int j=2;j<7;j++){
			sigma=sigma+(ufo_ds[j]*0.5)-1;
		}
	cout<<"Macierz UFO_DS wyglada nastepujaco:";
	for(int i=0;i<7;i++){
		cout<<"\nUFO_DS["<<i<<"]="<<ufo_ds[i];
	}
	
	cout<<"\n\nsigma="<<sigma;
	
	return 0;

}

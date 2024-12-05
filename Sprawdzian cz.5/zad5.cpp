#include <iostream>

using namespace std; 

int main(int argc, char** argv) {
	int miesiac;
	float av=0;
	
	cout<<"Podaj miesiac Twojego urodzenia=";
	cin>>miesiac;
	
	float t[miesiac+8];
	
	for(int i=0;i<miesiac+8;i++){
		cout<<"Podaj "<<i+1<<" ocene = ";
		cin>>t[i];
		av=av+t[i];
	}
	
	cout<<"\nTablica wprowadzonych ocen [";
	for(int i=0;i<miesiac+8;i++){
		cout<<" "<<t[i];
		if(i!=miesiac+7){
			cout<<",";
		}
	}
	cout<<"]\n";
	
	//Obliczenia
	
	av=av/(miesiac+8);
	
	float max=t[0]; 
	float min=t[0];
	
	
	for(int i=0;i<miesiac+8;i++){
		 if (t[i]<min){
 			min=t[i]; 
 		}
 		if (t[i]>max){
 			max=t[i];
 		}
	}
	
	cout<<"\nNajlepsza ocena:"<<max;
	cout<<"\n\nNajgorsza ocena:"<<min;
	cout<<"\n\nSrednia "<<miesiac+8<<" podanych ocen wynosi: "<<av;
	
	
	
	
	
	return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;

double POW_subiel(double A,double B){
	return A*B;
}
double OBW_subiel(double A,double B){
	return 2*(A+B);
	
}

int main() {
	double A,B;
	
	while(true){
		cout<<"Podaj A(cm): ";
		cin>> A;
		cout<<"Podaj B(cm): ";
		cin>>B;
		
		double pow=POW_subiel(A,B);
		double obw=OBW_subiel(A,B);
		
		cout<<"POW("<<A<<", "<<B<<")="<<pow<<"cm^2"<<endl;
		cout<<"OBW("<<A<<", "<<B<<")="<<obw<<"cm"<<endl;
			}
			
return 0;
}

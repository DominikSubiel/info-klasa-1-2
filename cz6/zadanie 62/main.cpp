#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <conio.h>


using namespace std;


double f_subiel(double x){
	if(x>=5&&x<6){
		return x*x-12*x+36;
	}
	else if(x>=M_PI/4&&x<5){
		return 1;
	}
		else if(x>=0&&x<M_PI/4){
			return tan(x);
		}
		else{
			return 0;
		}
	}

int main() {
	double x=0.0;
	int count=0;
    double step=0.1;
	
	
	while(x<1.5){
		cout<<"f("<<x<<")"<<f_subiel(x)<<endl;
		x+=step;
		count++;
		
		if(count%15==0){
			system("PAUSE");
 			return EXIT_SUCCESS;
	}
}
return 0;
}


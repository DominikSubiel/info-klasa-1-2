#include <iostream>
#include<cmath>
#include<vector>
#include <cstdlib>

using namespace std;

bool isPrime(int n){
	if(n<=1) return false;
	if(n<=3) return true;
	
	if(n%2==0||n%3==0)return false;
	for(int i=5;i*i<=n;i+=6)
	{
		if(n%i==0||n%(i+2)==0)return false;
	}
	return true;
}

int main() {
	int max;
	cout<<"podaj gorna granicesprawdzanego przedzialu:";
	cin>>max;
	
	vector<int>primes;
	for(int i=2;i<=max;i++){
		if(isPrime(i)){
			primes.push_back(i);
		
		}
	}
	cout<<"Znalezione pary liczb blizniaczych:"<<endl;
	for(size_t i=0; i<primes.size()-1;i++){
		if(primes[i+1]-primes[i]==2){
			cout<<primes[i]<<""<<primes[i+1]<<endl;
			system("PAUSE");
 			return EXIT_SUCCESS;
		}
	}
	return 0;
}

#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {
	
	system("Chcp 1250");
	system("cls");


int a;
float a_1 , a_2 , b_1 , b_2 , c_1 , c_2 , d_1 , d_2;

	printf("Podaj wspó3rzedn1 y punktu D :\n");
	cin>>a;
	
	printf("\nPodaj punkt A:");
	cin>>a_1;
	printf("\nPodaj drugi punkt A:");
	cin>>a_2;
	printf("\nPodaj punkt B:");
	cin>>b_1;
	printf("\nPodaj drugi punkt B:");
	cin>>b_2;
	printf("\nPodaj punkt C:");
	cin>>c_1;
	printf("\nPodaj drugi punkt C:");
	cin>>c_2;
	printf("\nPodaj punkt D:");
	cin>>d_1;
	printf("\nPodaj drugi punkt D:");
	cin>>d_2;
	system("cls");
	
	printf("\nA=(%.1f;%.1f)" , a_1 , a_2);
	printf("\nB=(%.1f;%.1f)" , b_1 , b_2);
	printf("\nC=(%.1f;%.1f)" , c_1 , c_2);
	printf("\nD=(%.1f;%.1f)" , d_1 , d_2);
	
	printf("\nWspó3rzedne wektora AB wynosz1:(%.1f;%.1f)" , d_1 , b_1);
	printf("\nWspó3rzedne wektora CD wynosz1:(%.1f,;%.1f)", b_2 , a_2);
	
	cout<<"\nDv1:"<<(sqrt((a_1*a_1)+(b_1*b_2)));
	cout<<"\nDv2:"<<(sqrt((a_2*a_2)+(b_2*b_2)));
	

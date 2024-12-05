#include <iostream>

using namespace std;

int main()
{
   system("chcp 1250");
   system("cls");
   
   float jablka, gruszki, cena_jablek, cena_gruszek, waga_jablek, waga_gruszek;
   
   printf("podaj wagê jab³ek w gramach:\n");
   scanf("%f", &jablka);
   
   printf("podaj wagê gruszek w tonach:\n");
   scanf("%f", &gruszki);
   
   printf("podaj cenê jab³ek w kilogramach:\n");
   scanf("%f", &cena_jablek);
   
   printf("podaj cenê gruszek w kilogramach:\n");
   scanf("%f", &cena_gruszek);
   
   
   waga_jablek= jablka*0.001 ;
   waga_gruszek= gruszki*1000 ;
   printf("wartoœæ jab³ek=");
   printf("%.2f z³",waga_jablek*cena_jablek);
   printf("\nwartoœæ gruszek=");
   printf("%.2f z³",waga_gruszek*cena_gruszek);
   printf("\nsuma=");
   printf("%.2f z³",(waga_jablek*cena_jablek)+(waga_gruszek*cena_gruszek));

    return 0;
}

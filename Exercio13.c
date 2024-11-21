#include <stdio.h>

int main (){
float N1,N2,N3,R;

printf ("De valor de N1 ");
scanf ("%f",&N1);

printf ("De valor de N2 ");
scanf ("%f",&N2);

printf ("De valor de N3 ");
scanf ("%f",&N3);

R = ((N1 * 1) + ( N2 * 2) + (N3 * 3)) /3;

if (R >= 60)
printf ("%.2f Aprovado",R);

else
printf ("%.2f REPROVADO MUITO BURRO",R);


}
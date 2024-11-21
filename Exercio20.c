#include <stdio.h>

int main (){
int A,B,C;

printf ("De valor de A");
scanf ("%d",&A);

printf ("De o valor de B");
scanf ("%d",&B);

printf ("De o valor de C");
scanf ("%d",&C);

if (A > C+B || B > A+C || C > B+A)
printf ("No e triagulo");

else if (A == B && A == C && B == A && B == C && C == A && C == B )
printf ("E equilatero");

else if (A != B && A != C && C != B && C != A)
printf ("Triangulo isosleces");

else
 printf ("Triangulo isosceles");

}
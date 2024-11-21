#include <stdio.h>

int main (){
int n,n1;

printf ("De um numero ");
scanf ("%d",&n);

printf ("De outro numero ");
scanf ("%d",&n1);

if (n == n1)
printf ("Sao ingual");

else if (n > n1) 
printf ("%d e maior",n);


else 
printf ("%d e maior",n1);

}
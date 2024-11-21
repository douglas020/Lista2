// 1. Fac¸a um programa que receba dois n´umeros e mostre qual deles ´ e o maior.

#include <stdio.h>

int main (){
int n1,n2;

printf ("Digite n1 ");
scanf ("%d",&n1);

printf ("Digite n2 ");
scanf ("%d",&n2);

if (n1>n2)
printf ("%d e maior ",n1);

else
printf ("%d e maior",n2);


}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
//Resolve equação do segundo grau
float a,b,c,delta,x1,x2;

printf ("De valor de a");
scanf ("%f",&a);

if (a == 0 ){
    printf ("Nao e possivel fazer a equasao ");
    exit (1);
}

printf ("De valor de b");
scanf ("%f",&b);

printf ("De valor de c");
scanf ("%f",&c);


delta = (b * b) - (4*a*c) ;

delta = sqrt (delta);

x1 = (-b + delta)/2*a;
x2 = (-b - delta)/2*a;

printf ("delta: %.2f\n",delta);
printf ("x1: %.2f \n",x1);
printf ("x2: %.2f",x2);


}
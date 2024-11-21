#include <stdio.h>
#include <math.h>

int main(){
int x,y,z;
int geo,pon,har,ari; 

printf ("Valor de x: ");
scanf ("%d",&x);

printf ("Valor de y: ");
scanf ("%d",&y);

printf ("Valor de z: ");
scanf ("%d",&z);

geo = cbrt (x*y*z);

pon = (x+2*y+3*z)/6;

har = 1 / (1/x + 1/y +  1/z);

ari = (x+y+z) /3;

printf ("Geometrica: %d \n",geo);
printf ("Ponderada: %d \n",pon);
printf ("Harmonica: %d \n",har);
printf ("Aritimetica %d",ari);

}
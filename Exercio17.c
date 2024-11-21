#include <stdio.h>

int main(){
float basemaior,basemenior,A,altu;

printf ("De valor da base");
scanf ("%f",&basemaior);

printf ("De valor da base2 ");
scanf ("%f",&basemenior);

printf ("De a altura ");
scanf ("%f",&altu);

if (basemaior <= 0 || basemenior <= 0 || altu <= 0)
printf ("Numero invalido ");

else {
    A = (basemaior + basemenior) * altu/2;
    printf (" %.2f valor do trapezio ",A );
}



}
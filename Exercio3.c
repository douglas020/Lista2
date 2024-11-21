#include <stdio.h>
#include <math.h>

int main(){
float n;

printf ("Digite um numero ");
scanf ("%f",&n);

if (n>=0){
 n = sqrt(n);
 printf ("Sua raiz %f",n);
}

else{
    n = n * n;
    printf ("Seu quadrado %f",n);
}


}
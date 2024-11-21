#include <stdio.h>
#include <math.h>

int main(){
int n;

printf ("Digite um numero ");
scanf ("%f",&n);

if (n>=0){
 n = sqrt(n);
 printf ("Sua raiz %d",n);
}

else{
    n = n * n;
    printf ("Seu quadrado %d",n);
}


}
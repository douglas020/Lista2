#include <stdio.h>
#include <stdlib.h>

int main(){
float n,n1,m;
printf ("De nota 1  ");
scanf ("%f",&n);

printf ("De nota 2  ");
scanf ("%f",&n1);

if (n < 0 || n > 10   ){ //primeira nota não foi aceita
    if (n1 < 0 || n1 > 10) // segunda tbm não
    printf ("Nota invalida");

    else {
        printf ("Sua nota %.2f ",n1);
    }
}
 
 else  if (n1 >= 0 || n1 <= 10 ){
  m = (n + n1) /2;
  printf ("Sua media %.2f ",m);
 }
}
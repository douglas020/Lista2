#include <stdio.h> 
#include <stdlib.h>

int main(){
float km,l,consumo;

printf ("Quantos km percorreu ");
scanf ("%f",&km);

printf ("Quantos combustivel consumiu ");
scanf ("%f",&l);

consumo = km/l;

if (km < 0 || l < 0 ){
    printf ("ERROR");
    exit(1);
} 

if (consumo < 8)
printf ("Venda o carrro!");

else if (consumo > 8 && consumo < 14)
printf ("Economico!");

else 
printf ("Super economico ");



}
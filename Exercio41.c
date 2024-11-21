#include <stdio.h>

int main(){
float peso,altura,IMC;

printf ("Qual seu peso ");
scanf ("%f",&peso);

printf ("Qual sua altura ");
scanf ("%f",&altura);

IMC = peso/altura;

if (IMC < 18.5)
printf ("Abaixo do peso");

else if (IMC < 24.9)
printf ("Saudavel");

else if (IMC < 29.9)
printf ("Peso em execesso");

else if (IMC < 34.9)
printf ("Obesidade Grau 1");

else if (IMC < 39.9)
printf ("Obesidade grau 2 (severa)");

else if (IMC >= 40)
printf ("Obesidade grau 3 (morbida)");


}
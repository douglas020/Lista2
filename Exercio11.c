#include <stdio.h>

int main(){
int n,unidade,dezena,centena,milha,r;
printf ("Digite um nuemro  ");
scanf ("%d",&n);

if (n <= 0)
printf ("Numero invalido");

else{
  unidade = n % 10; // Último dígito
    dezena = (n / 10) % 10; // Segundo dígito
    centena = (n / 100) % 10;  // Primeiro dígito
    milha = (n  /1000) % 10;

    r = unidade + dezena + centena + milha;
    printf ("%d \n",r);

}


}
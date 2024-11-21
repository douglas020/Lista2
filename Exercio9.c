#include <stdio.h>

int main(){
float salario,empre,porc;

printf ("Seu salairo ");
scanf ("%f",&salario);

printf ("Qual seu emprestimo ");
scanf ("%f",&empre);

porc = (salario * 20 ) /100;

if (salario < porc)
 printf (" Emprestimo concedido");

else 
 printf ("Emprestimo negado");


}
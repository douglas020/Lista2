#include <stdio.h>
#include <stdlib.h>

int main (){
int dia,mes,ano;

printf ("Qual o dia ");
scanf ("%d",&dia);

printf ("Qual o mes ");
scanf ("%d",&mes);

printf ("Qual o ano ");
scanf ("%d",&ano);

if (mes <= 0 || mes >12){
    printf ("ERROR");
    exit (1);
}

else if (ano >  2024){
    printf ("ERROR");
    exit (1);
}

else if (mes == 2){
    if (dia > 0 && dia < 28)
    printf ("Data valida ");

    else if (ano % 4 == 0 && dia == 29)
    printf ("Data valida ");

    else 
    printf ("Data Invalido ");
}

else if (dia <= 30){
    if (mes == 4)
    printf ("Data valida");
    else if (mes == 6)
    printf ("Data Valida");
    else if (mes == 9)
    printf ("Data Valida");
    else if (mes == 11)
    printf ("Data valida");

    else 
    printf ("Data invalida");
}

else 
    printf ("Data valida");
}
#include <stdio.h>
#include <stdlib.h>

int main (){
float n1,n2,n3,R;

printf ("Nota do trabalho do laboratorio ");
scanf ("%f",&n1);
 if ( n1 <0 || n1 > 10){
     printf ("Valor invalido");
     exit (1);
 }
 

printf ("nota da avalisao semestral ");
scanf ("%f",&n2);
if ( n2 <0 || n2 > 10){
 printf ("Valor invalido");
    exit (1);
}


printf ("Nota do exame final ");
scanf ("%f",&n3);
if ( n3 <0 || n3 > 10){
    printf ("Valor invalido");
    exit (1);
}

R = ((n1 * 2) + (n2 * 3) + (n3 * 5))/3;

if (R < 2.9 )
printf ("nota %.2f reprovado ",R);

else if (R > 2.9 && R < 4.9 )
printf ("nota %.2f em exame ",R);

else
printf ("nota %.2f aprovado",R);


}
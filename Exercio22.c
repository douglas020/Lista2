#include <stdio.h>

int main (){
int idade,tempo;
printf ("Qual sua idade");
scanf ("%d",&idade);
printf ("Quanto tempo de trabalho? ");
scanf ("%d",&tempo);

if ( idade < 65)
printf ("No aposentado");

else if (tempo >= 30)
printf ("Apostado");

else if (idade >= 60 && tempo >= 25)
printf ("Aposentado");

else if (idade >= 65)
printf ("Aposentado");
else
printf ("No aposentado");


}
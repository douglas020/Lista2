#include <stdio.h>
#include <stdlib.h>

int main (){
int n;
printf ("Digite um valo de 1 ao 7:  ");
scanf ("%d",&n);


switch (n)
{
case (1):
    printf ("Domingo");
    break;
case (2):
    printf ("Segunda feira");
    break;
case (3):
    printf ("Tersa feira");
    break;
case (4):
    printf ("Quarta feria ");
    break;
case (5):
    printf ("Quinta feira ");
    break;
case (6):
    printf ("Sexta feira ");
    break;
case (7):
    printf ("Sabado ");
    break;
default:
    printf ("Numero inavalido");
    break;
}
}
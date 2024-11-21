#include <stdio.h>

int main (){
int a,n1,n2;

printf ("1- Soma de 2 numeros \n");
printf ("2- Diferenca entre 2 numeros (maior pelo menor). \n");
printf ("3- Produto entre 2 numeros. \n");
printf ("4- Divis~ao entre 2 numeros (o denominador n~ao pode ser zero)");
scanf ("%d",&a);

switch (a)
{
case (1):
 printf ("Digite n1 ");
 scanf ("%d",&n1);
 printf ("Digite n2");
 scanf ("%d",&n2);
 printf ("Resultado %d",n1+n2);
break;
case (2):
 printf ("Digite n1 ");
 scanf ("%d",&n1);
 printf ("Digite n2");
 scanf ("%d",&n2);

 if (n1 > n2)
 printf ("resultado %d",n1-n2);
 else
 printf ("Resultado %d",n2-n1);

    break;
case (3):
 printf ("Digite n1 ");
 scanf ("%d",&n1);
 printf ("Digite n2");
 scanf ("%d",&n2);
 printf ("%d",n1*n2);
break;
case (4):
 printf ("Digite n1 ");
 scanf ("%d",&n1);
 printf ("Digite n2");
 scanf ("%d",&n2);

 if (n2 != 0 )
 printf ("Resultado %d",n1/n2);
 else 
printf ("IVALIDO");
break;


default:
printf ("IVALIDO");
    break;
}
}
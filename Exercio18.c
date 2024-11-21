#include <stdio.h>

int main (){
int a,n,n1,r;

printf ("1 para Soma \n");
printf ("2 para subtrair \n");
printf ("3 para multpilicar \n");
printf ("4 para dividir \n");
scanf ("%d",&a);

switch (a)
{
case (1):
    printf ("Digite um numero: ");
    scanf ("%d",&n);
    printf ("Digite outro numero:  ");
    scanf ("%d",&n1);
    r = n + n1;
    printf ("Resultado %d",r);
    break;
case (2):
      printf ("Digite um numero: ");
    scanf ("%d",&n);
    printf ("Digite outro numero:  ");
    scanf ("%d",&n1);
    r = n - n1;
    printf ("Resultado %d",r);
    break;
case (3):
  printf ("Digite um numero: ");
    scanf ("%d",&n);
    printf ("Digite outro numero:  ");
    scanf ("%d",&n1);
    r = n * n1;
    printf ("Resultado %d",r);
    break;
case (4):
  printf ("Digite um numero: ");
    scanf ("%d",&n);
    printf ("Digite outro numero:  ");
    scanf ("%d",&n1);
    r = n / n1;
    printf ("Resultado %d",r);
    break;
default:
printf ("VALOR ERRADO");
    break;
}



}
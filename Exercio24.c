#include <stdio.h>
#include <string.h>

int main(){

char esta [4];
float valor,imposto;


printf ("Qual valor ");
scanf ("%f",&valor);

printf ("Qual esta vc e ");
scanf("%s",esta);


if (strcmp(esta,"MG") == 0){
     imposto = (valor * 7) /100;
     valor = valor + imposto;
     printf ("Paga %.2f de impsoto valor fica %.2f ",imposto,valor);
}
 else if (strcmp(esta,"SP") == 0){
     imposto = (valor * 12) /100;
     valor = valor + imposto;
     printf ("Paga %.2f de impsoto valor fica %.2f ",imposto,valor);

 }

 else if (strcmp(esta,"RJ") == 0){
     imposto = (valor * 15) /100;
     valor = valor + imposto;
     printf ("Paga %.2f de impsoto valor fica %.2f ",imposto,valor);
 }

 else if (strcmp(esta,"MS") == 0){
     imposto = (valor * 8) /100;
     valor = valor + imposto;
     printf ("Paga %.2f de impsoto valor fica %.2f ",imposto,valor);

 }

 else
 printf ("Estado invalido");
}
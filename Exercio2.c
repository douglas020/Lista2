#include <stdio.h>
#include <math.h>

int main (){
int n1;

printf ("Digite um numero ");
scanf ("%d",&n1);

if (n1 >= 0){
    n1 = sqrt(n1);
    printf ("A sua raiz %d",n1);  
}
else 
printf ("Numero invalido");


}
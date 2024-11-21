#include <stdio.h>

int main(){
int n;
printf ("Digite numero ");
scanf ("%d",&n);

if (n % 3 == 0 && n % 5 == 0)
printf ("INVALIDO");

else if  (n % 3 == 0 )
     printf ("E divisil por 3");

else if (n % 5 == 0)
    printf ("E divisil por 5");
else 
printf ("No divisil por ngm");

}
#include <stdio.h>

int main (){
int n,n2,d;

printf ("Digite  um numero ");
scanf ("%d",&n);

printf ("Digite  outro numero ");
scanf ("%d",&n2);

if ( n > n2){
    d = n - n2;
    printf ("%d e maior e tem %d dinrensa ",n,d);
}

else {
     d = n2 - n;
    printf ("%d e maior e tem %d dinrensa ",n2,d);
}
}

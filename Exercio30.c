#include <stdio.h>

int main(){
int n1,n2,n3;

printf ("Digite n1 ");
scanf ("%d",&n1);

printf ("Digite n2 ");
scanf ("%d",&n2);

printf ("Digite n3 ");
scanf ("%d",&n3);

if (n1 > n2 && n1 > n3){
     if (n2 > n3 )
     printf ("%d %d %d",n1,n2,n3);
     else
     printf ("%d %d %d",n1,n3,n2);

}

else if (n2 > n3 && n2 > n1){
    if (n1 > n3)
    printf ("%d %d %d",n2,n1,n3);
    else 
    printf ("%d %d %d",n2,n3,n1);

}
else
    if (n2>n1)
    printf ("%d %d %d",n3,n2,n1);
    else
    printf ("%d %d %d",n3,n1,n2);



}
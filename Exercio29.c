#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
int a[5],b[5],r[5],repostac[5];
int acertos=0;
srand  (time(NULL));

for (int i=0;i<5;i++){
    a[i] = rand () % 100;
    b[i] = rand () % 100;
    repostac[i] = a[i] + b[i];
}

for (int i=0;i<5;i++){
printf ("Qual a soma de %d + %d \n",a[i],b[i]);
scanf ("%d",&r[i]);

}

for (int i=0;i<5;i++){
if (r[i] == repostac[i])
acertos++;

printf ("%d. %d + %d = %d \n",i+1,a[i],b[i],repostac[i]);



}

printf ("Vc acertou %d",acertos);
}
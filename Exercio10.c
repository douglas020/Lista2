#include <stdio.h>

int main (){
    char s;
    float h,r;

    printf ("H para homen \n M para mulher ");
    scanf ("%c",&s);

    if (s == 'H'){
         printf ("Sua altura ");
         scanf("%f",&h);

        r = (72.7 * h) - 58;
        printf ("Seu peso ideal %.2f",r);
    }

    else if (s == 'M'){
        r = (62.1 * h) - 44.7;
         printf ("Sua altura ");
         scanf("%f",&h);

         printf ("Seu peso idela %.2f ",r);

    }

    else 
    printf ("Ivalido");
}
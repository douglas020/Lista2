#include <stdio.h>

int main (){
int faltas;
float nota;

printf ("Seu conteceito ");
scanf ("%f",&nota);

printf ("Susa faltas ");
scanf ("%d",&faltas);

if (nota >= 9 ){
    if (faltas <= 20)
    printf ("Conteito A");

    else
    printf ("Conteito B");
}

else if (nota >= 7.5 ){
    if (faltas <= 20)
    printf ("Conteito B");

    else
    printf ("Conteito C");
}

else if (nota >= 7.5 ){
    if (faltas <= 20)
    printf ("Conteito C");

    else
    printf ("Conteito D");
}

else if (nota >= 5.0 ){
    if (faltas <= 20)
    printf ("Conteito D");

    else
    printf ("Conteito E");
}

else if (nota >= 4.0 ){
    if (faltas <= 20)
    printf ("Conteito D");

    else
    printf ("Conteito E");
}
else {
    if (faltas <= 20)
    printf ("Conteito D");

    else
    printf ("Conteito E");
}

}
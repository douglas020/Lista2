#include <stdio.h>

int main (){
int salario,tempo,reaju;
printf ("Seu salario: ");
scanf ("%d",&salario);

printf ("Seu tempo de serviso: ");
scanf ("%d",&tempo);

if (salario <= 500){
    if (tempo < 1){
        reaju = (salario * 25)/100;
        salario += reaju;
        printf ("Seu novo salario  %d",salario);
    }

    else if (tempo < 3){
        reaju = (salario * 25)/100;
        salario += reaju + 100;
        printf ("Seu novo salario  %d",salario);
    }

     else if (tempo < 3){
        reaju = (salario * 25)/100;
        salario += reaju + 100;
    }

    else if (tempo < 6 ){
        reaju = (salario * 25)/100;
        salario += reaju + 200;
        printf ("Seu novo salario  %d",salario);

    }

       else if (tempo < 6 ){
        reaju = (salario * 25)/100;
        salario += reaju + 300;
        printf ("Seu novo salario  %d",salario);
    }

       else if (tempo < 6 ){
        reaju = (salario * 25)/100;
        salario += reaju + 500;
        printf ("Seu novo salario  %d",salario);

    }
}


else if (salario <= 1000){
    if (tempo < 1){
        reaju = (salario * 20)/100;
        salario += reaju;
        printf ("Seu novo salario  %d",salario);
    }

    else if (tempo < 3){
        reaju = (salario * 20)/100;
        salario += reaju + 100;
        printf ("Seu novo salario  %d",salario);
    }

     else if (tempo < 3){
        reaju = (salario * 20)/100;
        salario += reaju + 100;
    }

    else if (tempo < 6 ){
        reaju = (salario * 20)/100;
        salario += reaju + 200;
        printf ("Seu novo salario  %d",salario);

    }

       else if (tempo < 6 ){
        reaju = (salario * 20)/100;
        salario += reaju + 300;
        printf ("Seu novo salario  %d",salario);
    }

       else if (tempo < 6 ){
        reaju = (salario * 20)/100;
        salario += reaju + 500;
        printf ("Seu novo salario  %d",salario);

    }
}

else if (salario <= 1500){
    if (tempo < 1){
        reaju = (salario * 15)/100;
        salario += reaju;
        printf ("Seu novo salario  %d",salario);
    }

    else if (tempo < 3){
        reaju = (salario * 15)/100;
        salario += reaju + 100;
        printf ("Seu novo salario  %d",salario);
    }

     else if (tempo < 3){
        reaju = (salario * 15)/100;
        salario += reaju + 100;
    }

    else if (tempo < 6 ){
        reaju = (salario * 15)/100;
        salario += reaju + 200;
        printf ("Seu novo salario  %d",salario);

    }

       else if (tempo < 6 ){
        reaju = (salario * 15)/100;
        salario += reaju + 300;
        printf ("Seu novo salario  %d",salario);
    }

       else if (tempo < 6 ){
        reaju = (salario * 15)/100;
        salario += reaju + 500;
        printf ("Seu novo salario  %d",salario);

    }
}

else if (salario <= 2000){
    if (tempo < 1){
        reaju = (salario * 10)/100;
        salario += reaju;
        printf ("Seu novo salario  %d",salario);
    }

    else if (tempo < 3){
        reaju = (salario * 10)/100;
        salario += reaju + 100;
        printf ("Seu novo salario  %d",salario);
    }

     else if (tempo < 3){
        reaju = (salario * 10)/100;
        salario += reaju + 100;
    }

    else if (tempo < 6 ){
        reaju = (salario * 10)/100;
        salario += reaju + 200;
        printf ("Seu novo salario  %d",salario);

    }

       else if (tempo < 6 ){
        reaju = (salario * 10)/100;
        salario += reaju + 300;
        printf ("Seu novo salario  %d",salario);
    }

       else if (tempo < 6 ){
        reaju = (salario * 10)/100;
        salario += reaju + 500;
        printf ("Seu novo salario  %d",salario);

    }
}
else {
    if (tempo < 1){
        reaju = (salario * 15)/100;
        salario += reaju;
        printf ("Seu novo salario  %d",salario);
    }

    else if (tempo < 3){
        
        salario +=  100;
        printf ("Seu novo salario  %d",salario);
    }

     else if (tempo < 3){
       
        salario +=  + 100;
    }

    else if (tempo < 6 ){
        
        salario += + 200;
        printf ("Seu novo salario  %d",salario);

    }

       else if (tempo < 6 ){
        
        salario +=  + 300;
        printf ("Seu novo salario  %d",salario);
    }

       else if (tempo < 6 ){
      
        salario +=  + 500;
        printf ("Seu novo salario  %d",salario);

    }
}



}
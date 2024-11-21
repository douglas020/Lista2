#include <stdio.h>

int main  (){
int codigo,quant;
float valor;
printf ("De o codigo ");
scanf  ("%d",&codigo);
printf ("Quantos ");
scanf ("%d",&quant);

 
if (codigo == 100){
    valor = (float) 1.20 * quant;
    printf ("Valor %.2f",valor);
}
else if (codigo == 101){
      valor = (float) 1.30 * quant;
     printf ("Valor %.2f",valor);
}
else if (codigo == 101){
      valor = (float) 1.50 * quant;
     printf ("Valor %.2f",valor);
}

else if (codigo == 102){
      valor = (float) 1.20 * quant;
     printf ("Valor %.2f",valor);
}

else if (codigo == 103){
      valor = (float) 1.70 * quant;
     printf ("Valor %.2f",valor);
}

else if (codigo == 104){
      valor = (float) 1.70 * quant;
     printf ("Valor %.2f",valor);
}

else if (codigo == 105){
      valor = (float) 2.20 * quant;
     printf ("Valor %.2f",valor);
}

else if (codigo == 106){
      valor = (float) 1.0 * quant;
     printf ("Valor %.2f",valor);
}

else 
printf ("ERROR");
}





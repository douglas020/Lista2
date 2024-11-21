#include <stdio.h>

int main(){
int valor,dis;

printf ("Qual o custo da frabrica");
scanf ("%d",&valor);

if (valor <= 12000){
valor  += (valor *5) / 100;
printf ("Custo ao consumidor:  %d",valor);

}

else if (valor > 12000 && valor < 25000){
dis  = (valor * 10) / 100;
valor +=  ( valor * 15 ) /100;
valor += dis;
printf ("Custo ao consumidor:  %d",valor);
}

else{
dis  = (valor * 15) / 100;
valor +=  ( valor * 20 ) /100;
valor += dis;
printf ("Custo ao consumidor: %d",valor);

}

}
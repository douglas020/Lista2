#include <stdio.h>

int main(){
int vendas,comissao;

printf ("Qual valor da venda ");
scanf ("%d",&vendas);

if (vendas >= 100000){
comissao = (vendas * 16) /100;
comissao = 700 + vendas + comissao;
printf ("Sua comissao %d",comissao);

}

else if (vendas <80000 && vendas >= 60000 ){
    comissao = (vendas * 14) /100;
 comissao = 650 + vendas  + comissao;
 printf ("Sua comissao %d",comissao);

}

else if (vendas <60000 && vendas >= 40000){
    comissao = (vendas * 14) /100;
 comissao = 600 + vendas + comissao ;
 printf ("Sua comissao %d",comissao);
}

else if (vendas <60000 && vendas >= 40000){
    comissao = (vendas * 14) /100;
 comissao = 550 + vendas + comissao ;
 printf ("Sua comissao %d",comissao);

}

else if (vendas <40000 && vendas >= 20000){
    comissao = (vendas * 14) /100;
 comissao = 500 + vendas + comissao ;
 printf ("Sua comissao %d",comissao);

}
else {
    comissao = (vendas * 14) /100;
 comissao = 400 + vendas  + comissao;
 printf ("Sua comissao %d",comissao);

}
}
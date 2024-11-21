#include <stdio.h>

int main (){
int preso,aumeto;

printf ("De valor ");
scanf ("%d",&preso);

if (preso < 50){
     aumeto = (preso * 5) /100;
    preso = aumeto + preso;
    printf ("Auemnto: %d \n",aumeto);
    printf ("Novo valor %d",preso); 
  
}

else if (preso >= 50 && preso < 100){
          aumeto = (preso * 10) /100;
     preso = aumeto + preso;
      printf ("Auemnto: %d \n",aumeto);
    printf ("Novo valor %d",preso);
     
}

else{
    aumeto = (preso * 15) /100;
    preso = aumeto + preso;
    printf ("Auemnto: %d \n",aumeto);
    printf ("Novo valor %d",preso); 
    
}
}
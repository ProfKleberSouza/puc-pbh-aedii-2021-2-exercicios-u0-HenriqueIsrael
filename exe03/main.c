#include <stdio.h>

int main() {
   int n;
   //Recebe a entrada.
   scanf("%i", &n);

   /*Condição para verificar se o número é
    neutro, par, impar, negativo ou positivo, podendo atender mais de uma dessas condições.*/
   if(n==0){
      printf("NUMERO NEUTRO\n");
   } else if(n<0 && n%2==0){
      printf("NUMERO PAR NEGATIVO");
   } else if(n<0 && n%2!=0){
      printf("NUMERO IMPAR NEGATIVO");
   } else if(n>0 && n%2==0){
      printf("NUMERO PAR POSITIVO");
   } else if(n>0 && n%2!=0){
      printf("NUMERO IMPAR POSITIVO");
   }
   
   return 0;
}
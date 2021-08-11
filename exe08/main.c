#include <stdio.h>

int main() {
   //Declaração de variável.
   int n;
   //Laço de repetição a ser executado enquanto n for diferente de zero.
   do{
      //Recebe valores para n.
      scanf("%i",&n);
      //Condição para verificar se n é negativo.
      if(n<0){
         printf("NEGATIVO\n");
      }  
      //Condição para verificar se n é positivo.
         else if(n>0){
            printf("POSITIVO\n");
         }     
   }while(n!=0);
   
   return 0;
}
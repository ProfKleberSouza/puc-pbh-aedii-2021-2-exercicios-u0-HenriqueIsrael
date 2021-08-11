#include <stdio.h>

int main() {
   //Declaração de variáveis.
   int i,vet[10];
   
   //Laço de repetição que percorre o vetor.
   for(i=0;i<10;i++){
      scanf("%i",&vet[i]);
   }

   //Printa os valores do vetor na posição i.
   for(i=9;i>=0;i--){
      printf("%i\n",vet[i]);
   }
   return 0;
}
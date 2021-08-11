#include <stdio.h>

int main() {
   //Declaração de variáveis.
   int  i, maior, menor;
   int n[3];

   //Laço de repetição para receber 3 valores correspondente a posição.
   for(i=0;i<=2;i++){
      scanf("%i",&n[i]);
   }
   //Incializa maior e menor com o primeiro número digitado.
   maior = n[0];
   menor = n[0];

   //Laço de repetição para percorrer o vetor preenchido.
   for(i=0;i<=2;i++){
      //Condição para encontrar o maior valor.
      if(n[i]>maior){
         maior = n[i];
      }
      //Condição para achar o menor valor.
      if(n[i]<menor){
         menor = n[i];
      }
   }
   //Mostra o maior e o menor valor na tela.
   printf("MENOR = %i\n",menor);
   printf("MAIOR = %i\n",maior);

   return 0;
}
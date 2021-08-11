#include <stdio.h>

int main() {
   //Declaração de variáveis.
   int i,N;
   int maior,menor;
   //Recebe o valor de N.
   scanf("%i",&N);
   //Cria um vetor números de tamanho N.
   int num[N];
   //Laço de repetição executado N vezes.
   for(i=0; i<N; i++){
   //Recebe N valores que são armazenados em cada posição do vetor. 
      scanf("%i",&num[i]);
   }
   //Variáveis maior e menor recebem o valor de número na posição zero.
   maior = num[0];
   menor = num[0];

   //Laço de repetição que percorre o vetor.
   for(i=0; i<N; i++){
      //Verifica o maior número.
      if(num[i]>maior){
         maior = num[i];
      }
      //Verifica o menor número.
      if(num[i]<menor){
         menor = num[i];
      }
   }
   //Printa os valores na tela.
   printf("MENOR = %i\n",menor);
   printf("MAIOR = %i\n",maior);
   
   return 0;
}
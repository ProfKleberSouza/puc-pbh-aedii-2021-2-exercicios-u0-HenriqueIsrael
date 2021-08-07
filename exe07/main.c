#include <stdio.h>

int main() {
   int i,N;
   int maior,menor;

   scanf("%i",&N);

   int num[N];

   for(i=0; i<N; i++){
      scanf("%i",&num[i]);
   }

   maior = num[0];
   menor = num[0];

   for(i=0; i<N; i++){
      if(num[i]>maior){
         maior = num[i];
      }
      if(num[i]<menor){
         menor = num[i];
      }
   }

   printf("MENOR = %i\n",menor);
   printf("MAIOR = %i\n",maior);
   
   return 0;
}
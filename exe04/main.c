#include <stdio.h>

int main() {
   int  i, maior, menor;
   int n[3];

   for(i=0;i<=2;i++){
      scanf("%i",&n[i]);
   }

   maior = n[0];
   menor = n[0];

   for(i=0;i<=2;i++){

      if(n[i]>maior){
         maior = n[i];
      }

      if(n[i]<menor){
         menor = n[i];
      }
   }

   printf("MENOR = %i\n",menor);
   printf("MAIOR = %i\n",maior);

   return 0;
}
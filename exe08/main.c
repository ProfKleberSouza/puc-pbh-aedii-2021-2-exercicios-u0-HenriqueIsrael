#include <stdio.h>

int main() {
   int n;

   scanf("%i",&n);

      if(n!=0){
         do{
            n>0? printf("POSITIVO\n") : printf("NEGATIVO\n");
            scanf("%i",&n);
         }while(n != 0);
      }
   return 0;
}
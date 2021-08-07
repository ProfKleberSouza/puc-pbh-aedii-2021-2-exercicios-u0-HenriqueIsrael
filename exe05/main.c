#include <stdio.h>

int main() {
   int n1, n2, n3, n4;
   float media=0;

   scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

   media = (float)(n1+n2+n3+n4)/4;

   if(media>=6){
      printf("NOTA = %0.1f (APROVADO)\n", media);
   } else{
      printf("NOTA = %0.1f (REPROVADO)\n", media);
   }
   
   return 0;
}
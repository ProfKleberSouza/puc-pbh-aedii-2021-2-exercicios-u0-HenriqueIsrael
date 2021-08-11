#include <stdio.h>

int main() {
   int i,n;
   float media=0,somaNotas=0;
   
   scanf("%i", &n);

   char nome[50];
   int nota[n];

   for(i=0;i<n;i++){
      scanf("%s %i",&nome[i],&nota[i]);
      somaNotas += nota[i];
   }

   media = somaNotas/n;

   printf("NOTA MEDIA = %.1f",media);

   for(i=0;i<3;i++)

   return 0;
}
#include <stdio.h>

int main() {
   //Declaração de variáveis.
   int n1, n2, n3, n4;
   float media=0;
   //Recebe os valores das notas.
   scanf("%i %i %i %i", &n1, &n2, &n3, &n4);
   //Calcula a média.
   media = (float)(n1+n2+n3+n4)/4;
   //Condição para verificar se o aluno está aprovado.
   if(media>=6){
      printf("NOTA = %0.1f (APROVADO)\n", media);
   } else{
      printf("NOTA = %0.1f (REPROVADO)\n", media);
   }
   
   return 0;
}
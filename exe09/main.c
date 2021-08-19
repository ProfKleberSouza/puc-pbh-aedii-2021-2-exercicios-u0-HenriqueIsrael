#include <stdio.h>
#include <string.h>
#define MAX 5

struct aluno{
   char nome[40];
   float nota;
};

void colocarEmOrdemAlfabetica(struct aluno Sala[],int N){
   if(strcmp(Sala[N-3].nome, Sala[N-2].nome) > 0 && strcmp(Sala[N-1].nome, Sala[N-2].nome)> 0){
      printf("%s %.1f\n", Sala[N - 2].nome, Sala[N - 2].nota);
      if(strcmp(Sala[N - 3].nome, Sala[N - 1].nome)>0){
         printf("%s %.1f\n", Sala[N - 1].nome, Sala[N - 1].nota);
         printf("%s %.1f", Sala[N - 3].nome, Sala[N - 3].nota);
      }
      else{
         printf("%s %.1f\n", Sala[N - 3].nome, Sala[N - 3].nota);
         printf("%s %.1f", Sala[N - 1].nome, Sala[N - 1].nota);
      }
   }
   else if(strcmp(Sala[N-3].nome, Sala[N-1].nome) > 0 && strcmp(Sala[N-2].nome, Sala[N-1].nome)> 0){
      printf("%s %.1f\n", Sala[N - 1].nome, Sala[N - 1].nota);
      if(strcmp(Sala[N - 3].nome, Sala[N - 2].nome)>0){
         printf("%s %.1f\n", Sala[N - 2].nome, Sala[N - 2].nota);
         printf("%s %.1f", Sala[N - 3].nome, Sala[N - 3].nota);
      }
      else{
         printf("%s %.1f\n", Sala[N - 3].nome, Sala[N - 3].nota);
         printf("%s %.1f", Sala[N - 2].nome, Sala[N - 2].nota);
      }
   }
   else{
      printf("%s %.1f\n", Sala[N - 3].nome, Sala[N - 3].nota);
      if(strcmp(Sala[N - 1].nome, Sala[N - 2].nome)>0){
         printf("%s %.1f\n", Sala[N - 2].nome, Sala[N - 2].nota);
         printf("%s %.1f", Sala[N - 1].nome, Sala[N - 1].nota);
      }
      else{
         printf("%s %.1f\n", Sala[N - 1].nome, Sala[N - 1].nota);
         printf("%s %.1f", Sala[N - 2].nome, Sala[N - 2].nota);
      }
   }
}

int main() {
   int auxiliar,totalNotas = 0;
   int x,j,i,nAlunos;
   char auxiliar2[40];
   float mediaNotas;

   scanf("%d",&nAlunos);

   struct aluno Aluno[MAX];

   for(i=0;i<nAlunos;i++){
      scanf("%s %f",&Aluno[i].nome, &Aluno[i].nota);
      fflush(stdin);
      totalNotas += Aluno[i].nota;
   }

   for(j=0;j<nAlunos;j++){
      for(x=j;x<nAlunos;x++){
         if(Aluno[j].nota > Aluno[x].nota){
            auxiliar = Aluno[j].nota;
            Aluno[j].nota = Aluno[x].nota;
            Aluno[x].nota = auxiliar;

            strcpy(auxiliar2,Aluno[j].nome);
            strcpy(Aluno[j].nome, Aluno[x].nome);
            strcpy(Aluno[x].nome, auxiliar2);
         }
      }
   }

   mediaNotas = (float)totalNotas / (nAlunos);

   printf("NOTA MEDIA = %0.1f\n",mediaNotas);
   colocarEmOrdemAlfabetica(Aluno,nAlunos);

   return 0;
}
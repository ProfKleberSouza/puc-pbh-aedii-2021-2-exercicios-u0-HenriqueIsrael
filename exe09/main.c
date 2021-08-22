#include <stdio.h>
#include <string.h>
#define MAX 5
//Struct aluno com atributos nome e nota
struct aluno{
   char nome[40];
   float nota;
};
//Procedimento que coloca as três maiores notas em ordem alfabética
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
   //Declaração de variáveis
   int auxiliar,totalNotas = 0;
   int x,j,i,nAlunos;
   char auxiliar2[40];
   float mediaNotas;

   //Recebe a variável nAlunos
   scanf("%d",&nAlunos);

   //Instancia vetor de Aluno com tamanho MAX
   struct aluno Aluno[MAX];

   //Laço de repetição para receber nome e nota de aluno
   for(i=0;i<nAlunos;i++){
      scanf("%s %f",&Aluno[i].nome, &Aluno[i].nota);
      fflush(stdin);
      //Faz a soma das notas
      totalNotas += Aluno[i].nota; 
   }

   //Laço de repetição para encontrar a maior nota
   for(j=0;j<nAlunos;j++){
      for(x=j;x<nAlunos;x++){
         if(Aluno[j].nota > Aluno[x].nota){
            auxiliar = Aluno[j].nota;
            Aluno[j].nota = Aluno[x].nota;
            Aluno[x].nota = auxiliar;

            //Copia variáveis
            strcpy(auxiliar2,Aluno[j].nome);
            strcpy(Aluno[j].nome, Aluno[x].nome);
            strcpy(Aluno[x].nome, auxiliar2);
         }
      }
   }
   //Calcula a media das notas
   mediaNotas = totalNotas / (nAlunos*1.0);

   //Printa a nota média
   printf("NOTA MEDIA = %0.1f\n",mediaNotas);
   //Procedimento que coloca os nomes em ordem alfabética
   colocarEmOrdemAlfabetica(Aluno,nAlunos);

   return 0;
}
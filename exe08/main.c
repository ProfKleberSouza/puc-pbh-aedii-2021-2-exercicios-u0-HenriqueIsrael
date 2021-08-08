#include <stdio.h>

int main() {
   int n;
   do{
      scanf("%i",&n);
      if(n<0){
         printf("NEGATIVO\n");
      }  
         else if(n>0){
            printf("POSITIVO\n");
         }     
   }while(n!=0);
   
   return 0;
}
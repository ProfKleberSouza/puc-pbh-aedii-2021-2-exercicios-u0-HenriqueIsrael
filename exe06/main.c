#include <stdio.h>

int main() {
   //Declaração de variáveis.
   int x, y, z;

   //Recebe os lados do triângulo.
   scanf("%i %i %i", &x, &y, &z);

   //Condição para verificar se os lados formam um triângulo.
   if((x > y+z) || (y > z+x) || (z > y+x)){
      printf("OS LADOS NAO FORMAM UM TRIANGULO");
   }
   //Se os lados forem iguais, triângulo equilátero.
    else if(x==y && y==z){
      printf("TRIANGULO EQUILATERO");
   }
   //Se pelo menos dois lados forem iguais, triângulo isosceles.
    else if(x==y || y==z || x==z){
         printf("TRIANGULO ISOSCELES");
   } 
   //Se todos os lados forem diferentes, triângulo escaleno.
   else if(x!=y && y!=z){
         printf("TRIANGULO ESCALENO");
   }
   
   return 0;
}
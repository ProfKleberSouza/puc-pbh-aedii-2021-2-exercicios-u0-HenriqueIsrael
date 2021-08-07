#include <stdio.h>

int main() {
   int x, y, z;

   scanf("%i %i %i", &x, &y, &z);

   if((x > y+z) || (y > z+x) || (z > y+x)){
      printf("OS LADOS NAO FORMAM UM TRIANGULO");
   } else if(x==y && y==z){
      printf("TRIANGULO EQUILATERO");
   } else if(x==y || y==z || x==z){
         printf("TRIANGULO ISOSCELES");
   } else if(x!=y && y!=z){
         printf("TRIANGULO ESCALENO");
   }
   return 0;
}
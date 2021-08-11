#include <stdio.h>

int main() {
   //Declaração de variáveis.
   int R,V,T,D,L;
   //Recebe os valores T, V e R.
   scanf("%i %i %i", &T, &V, &R);
   // Distância percorrida = tempo * velocidade.
   D = T * V;
   //Litros = distância / rendimento médio.
   L = D/R;
   //Printa os valores da tela.
   printf("R = %i\n",R);
   printf("V = %i\n",V);
   printf("T = %i\n",T);
   printf("D = %i\n",D);
   printf("L = %i\n",L);
   
   return 0;
}
#include<stdio.h>
int main(){
   // Declarar a variavel que armazena o lado
   float lado, area;
   // Ler o lado do quadrado
   printf("Entre com o lado do quadrado: ");
   scanf("%f", &lado);
   // Calcular a area = lado*lado
   area = lado*lado;
   // Exibir a area calculada
   printf("Lado do quadrado: %0.2f, Area=%0.2f", lado,  area);
   return 0;
}

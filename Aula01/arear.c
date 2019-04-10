#include<stdio.h>
int main(){
  float base, altura, area;
  printf("Entre com a base e a altura:");
  scanf("%f %f", &base, &altura);
  area = base*altura;
  printf("base=%f, altura=%f, area=%f \n", base, altura, area);
  return 0;
}

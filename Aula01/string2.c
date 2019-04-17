#include<stdio.h>
int main(){
    char nome[128];
    printf("Entre com o nome: ");
    fgets(nome, 128, stdin);
    printf("Nome=%s", nome);
    printf("%s", nome);
    return 0;
}
#include<stdio.h> 

int main(){
    unsigned int n, linha, conta1; 
    puts("Digite a quantidade de linhas: "); 
    scanf("%d", &n);
    for(linha=1; linha <= n; linha++){ 
        for(conta1=1; conta1<=linha; conta1++)
            printf("1 ");
        printf("\n");
    }
    return 0; 
}
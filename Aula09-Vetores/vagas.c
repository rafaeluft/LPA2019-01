#include<stdio.h>
#define MAX 32
#define CADASTRAR 1
#define REMOVER 2
#define BUSCAR 3
#define MOSTRAR 4

int main(){
    int V[MAX], op, i, temp, found;
    char ocupado[MAX] = {0};
    do{
        puts("1 - Adiciona\n2 - Remover\n3 - Buscar\n4 - Mostrar\n0 - Sair\nOpção:");
        scanf("%d", &op);
        switch (op)
        {
        case CADASTRAR:
            for(i=0; ocupado[i]==1 && i<32; i++);
            if(i<32){
                printf("Digite o valor: ");
                scanf("%d", &temp);
                V[i] = temp;
                ocupado[i] = 1;
                puts("Cadastro realizado com sucesso!");
            }
            else{
                puts("Todas as posições preenchidas");
            }
            break;
        case REMOVER:
        case BUSCAR: 
            puts("Qual elemento a ser buscado: ");
            scanf("%d", &temp);
            //TODO: Ha um erro de lógica aqui. 
            //Descubra qual é e proponha uma solução
            for(i=0, found=0; ocupado[i]==1 && i<32 && V[i]!=temp; cont+=ocupado[i], i++);
            if(i<32){
                printf("Encontrado na pos: %i\n", i);
                if(op==REMOVER){
                    ocupado[i] = 0;
                    puts("Removido com sucesso");
                }
            }else{
                puts("Elemento não encontrado!");
            }
            break;
        case MOSTRAR: 
            temp=0; 
            for(i=0; i<MAX; i++)
                if(ocupado[i]){
                    printf("[%i] = %i, ", i, V[i]);
                    temp++;
                }
            if(temp==0) puts("Array vazio");
            printf("\n");
        }
    }while(op!=0);
    return 0;
}
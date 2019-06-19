#include<stdio.h>
#include<string.h>

int main(){
    char msg[256];
    int key[2][2] = {{5,7},{2,3}}, i,j, cols;
    //puts("Entre com a mensagem (max 255)");
    fgets(msg, 256, stdin);
    //printf("%s [%lu]\n", msg, strlen(msg));
    cols = strlen(msg)/2;
    cols+= cols%2;
    int M[2][cols];
    printf("2 %d\n", cols);
    for(i=0; i<2; i++, putchar('\n'))
        for(j=0; j< cols; j++){
            M[i][j] = msg[cols*i + j];
            //printf("%d ", M[i][j]);
        }
    //Em M[i][j] agora está arranjado com sua mensagem
    //TODO: Multiplicar a matriz key por M
    //Exibir a matriz resultante (código acima)        
    return 0;
}
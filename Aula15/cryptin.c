#include<stdio.h>
#include<string.h>
#include<stdio.h>

int main(){
    char msg[256];
    int key[2][2] = {{5,7},{2,3}}, i,j, cols;
    puts("Entre com a mensagem (max 255)");
    fgets(msg, 256, stdin);
    printf("%s [%lu]\n", msg, strlen(msg));
    cols = strlen(msg)/2;
    cols+= cols%2;
    char M[2][cols];
    printf("2 %d\n", cols);
    for(i=0; i<2; i++, putchar('\n'))
        for(j=0; j< cols; j++){
            M[i][j] = msg[cols*i + j];
            printf("%c(%d) ", M[i][j], M[i][j]);
        }
            
    return 0;
}
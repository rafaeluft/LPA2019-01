#include<stdio.h>

int main(){
    int n, m, i,j ;
    //Realiza a leitura dos dados criptografados
    int inversekey[2][2] = {{3, -7},{-2, 5}};
    scanf("%d %d", &n, &m);
    int M[n][m];
    for(i=0; i<n; i++, putchar('\n'))
        for(j=0; j<m; j++)
        {
            scanf("%d", &M[i][j]);
            printf("%d ", M[i][j]);
        }
        //TODO: mulitplicar inversekey pela matriz lida
        //TODO: Exibir linha a linha da matriz resultante 
        // para exibir a mensagem(sem dar o \n) para exibir 
    return 0;
}
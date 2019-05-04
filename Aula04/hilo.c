#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int segredo = rand()%100, palpite, nota;
    float creditos;
    puts("Bem vindo-ao cassino LP-B!");
    do{
        puts("Entre com a nota (10, 20, 50, 100)!");
        scanf("%d", &nota);
    }while(nota!=10 && nota != 20 && nota != 50 && nota!= 100);
    creditos = nota+5;
    while(creditos > 0){
        printf("Saldo atual: %0.2f\n", creditos);
        puts("Entre com um numero entre 0 e 99: ");
        scanf("%d", &palpite);
        if(palpite==segredo){
            puts("Uauuuuuu vc acertou!!");
            printf("Valor retornado: %f\n", creditos);
            break;
        }else{
            creditos-=0.5;
            if(palpite > segredo)
                puts("Seu palpite foi maior");
            else
                puts("Seu palpite foi menor");
        }
    }
    puts("Agradecemos a sua visita!");
    return 0;
}

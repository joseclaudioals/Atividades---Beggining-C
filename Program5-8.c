#include <stdio.h>

int main(void){
    int taboleiro[3][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    unsigned int contador=8;
    int jogador1 = 1, jogador2 = 0, escolha = 0;

    printf("JOGO DA VELHA\n");

    while(contador<9){
        printf(" %i | %i | %i\n", taboleiro[0][0], taboleiro[1][0], taboleiro[2][0]);
        printf("===+===+===\n");
        printf(" %i | %i | %i\n", taboleiro[0][1], taboleiro[1][1], taboleiro[2][1]);
        printf("===+===+===\n");
        printf(" %i | %i | %i\n", taboleiro[0][2], taboleiro[1][2], taboleiro[2][2]);
        contador++;
        
    }
    

    

    return 0;
}
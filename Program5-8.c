#include <stdio.h>

int main(void){
    char tab[3][3]={
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'},
    };
    unsigned int contador=0;
    int escolha = 0;

    printf("JOGO DA VELHA\n");

    while(contador<9){
        printf(" %c | %c | %c\n", tab[0][0], tab[0][1], tab[0][2]);
        printf("===+===+===\n");
        printf(" %c | %c | %c\n", tab[1][0], tab[1][1], tab[1][2]);
        printf("===+===+===\n");
        printf(" %c | %c | %c\n", tab[2][0], tab[2][1], tab[2][2]);
        
        contador++;
        printf("\n> Jogador %c:\n", contador%2 ? '1' : '2');
        printf("Escolha a sua posicao: ");
        scanf(" %i", &escolha);
        int temp = escolha;
        tab[(--escolha/3)][(--temp%3)]=(contador%2)? 'X' : 'O';
        //verificando linhas iguais
        if((tab[0][0]==tab[0][1]) && (tab[0][1]==tab[0][2]) || (tab[1][0]==tab[1][1]) && (tab[1][1]==tab[1][2]) || (tab[2][0]==tab[2][1]) && (tab[2][1]==tab[2][2])){
            printf("o jogador %c venceu!!\n", (contador%2) ? '1' : '2');
            break;
        }
            //verificando colunas iguais
            else if((tab[0][0]==tab[1][0]) && (tab[1][0]==tab[2][0]) || (tab[0][1]==tab[1][1]) && (tab[1][1]==tab[2][1]) || (tab[0][2]==tab[1][2]) && (tab[1][2]==tab[2][2])){
                printf("o jogador %c venceu!!\n", (contador%2) ? '1' : '2');
                break;
            }
                //verificando diagonais iguais
                else if((tab[0][0]==tab[1][1]) && (tab[1][1]==tab[2][2]) || (tab[0][2]==tab[1][1]) && (tab[1][1]&&tab[2][0])){
                    printf("o jogador %c venceu!!\n", (contador%2) ? '1' : '2');
                    break;
                }

        if(contador==9){
            printf("o jogo foi empatado!\n");
            break;
        }
    }
    
    printf("obrigado por jogar!!\n");
    

    return 0;
}
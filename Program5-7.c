#include <stdio.h>

int main(void){
    size_t indice = 0;
    int soma=0;
    printf("Quantas notas ira tirar a media?\n");
    scanf(" %zd", &indice);

    float notas[indice];
    if(indice>0){
        for(unsigned int i=0; i<indice;i++){
            printf("\ninsira a %ia nota:", i+1);
            scanf(" %f", &notas[i]);
            soma+=notas[i];
        }

        float media = (float)soma/indice;

        printf("\nverifique as notas abaixo\n\n");
        for(unsigned int i=0; i<indice; i++){
            printf("%i nota: %.2f\n", i, notas[i]);
        }

        printf("a media das notas eh: %.2f\n", media);
    }
    else if(indice<=0)
        printf("insira uma quantidade maior que zero\n");
    

    return 0;
}
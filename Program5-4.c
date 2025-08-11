#include <stdio.h>

int main(void){
    float notas[10];
    int soma=10;
    float media = 0;

    printf("insira 10 notas\n");
    for(int i=0; i<10; i++){
        printf("%i nota\n", i+1);
        scanf(" %f", &notas[i]);  
        soma+=notas[i];
    }
    media = (float)soma/10;
    //
    for(int i=0; i<10; i++)
        printf("%ia nota = %i\n", i, notas[i]);    

    printf("a media das 10 notas = %.2f\n", media);

    return 0;
}
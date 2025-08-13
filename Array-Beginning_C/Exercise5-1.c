/*Exercise 5-1. Write a program that will read five values of type double from the keyboard 
and store them in an array. Calculate the reciprocal of each value (the reciprocal of 
value x is 1.0/x) and store it in a separate array. Output the values of the reciprocals and 
calculate and output the sum of the reciprocals.*/


#include <stdio.h>

int main(void){
    double arry[5]={0};
    double reciproco[5]={0};
    double soma=0;

    /* lê os valores e armazena em arry*/
    for(int i=0; i<5; i++){
        printf("insira o %i valor\n", i+1);
        scanf(" %lf", &arry[i]);
    }
    
    /*
    printa os numeros reciprocos de arry, armazena em reciproco
    e soma em soma
    */
    printf("O reciproco de cada numero eh:\n");
    for(int i=0; i<5; i++){
        reciproco[i]=1/arry[i];
        printf("%.2lf eh reciproco de %.2lf\n", reciproco[i], arry[i]);
        soma+=reciproco[i];
    }

    printf("a somatoria dos numeros reciprocos eh: %.2lf\n", soma);

    return 0;
}
/*Exercise 5-3. Write a program that will read five values from the keyboard and store 
them in an array of type float with the name amounts. Create two arrays of five 
elements of type long with the names dollars and cents. store the whole number part 
of each value in the amounts array in the corresponding element of dollars and the 
fractional part of the amount as a two-digit integer in cents (e.g., 2.75 in amounts[1] 
would result in 2 being stored in dollars[1] and 75 being stored in cents[1]). Output 
the values from the two arrays of type long as monetary amounts (e.g., $2.75)*/

#include <stdio.h>

int main(void){
    float poupanca[5]={0};
    double reais[5]={0};
    double centavos[5]={0};
//armazenar os valores em poupança
    for(int i=0; i<5; i++){
        printf("\ninsira %io valor: R$", i+1);
        scanf(" %f", &poupanca[i]);
    }
//separação da parte inteira e decimal e imprimir elas
    for(int i=0; i<5; i++){
        int temp= (int)poupanca[i];

        reais[i]=(double)temp;
        centavos[i]=poupanca[i]-temp;

        printf("\nReais: R$%.2lf | Centavos: R$%.2f", reais[i], centavos[i]);
    }

    return 0;
}
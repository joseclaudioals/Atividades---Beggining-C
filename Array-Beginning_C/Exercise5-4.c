/* Exercise 5-4. Define a two-dimensional array, data[11][5], of type double. Initialize  
the elements in the first column with values from 2.0 to 3.0 inclusive in steps of 0.1.  
If the first element in a row has value x, populate the remaining elements in each row 
with the values 1/x, x^2, x^3, and x^4 . Output the values in the array with each row on a 
separate line and with a heading for each column*/

#include <stdio.h>
#include <math.h>

int main(void){
    double array[11][5];
    //armazena os valores determinados na primeira coluna array[i][0]
    for(int i=0; i<11; i++){
        array[i][0]=2.0+(i*0.1);
    }
    //passando por cada linha, armazena os valores determinados para as colunas entre 1 e 4
    for(int i=0; i<11; i++){
        for(int u=1; u<5; u++){
            if(u==1)
                array[i][u]=1/array[i][0];
                else 
                    array[i][u] = pow(array[i][0], u);
        }
    }
    //a questão não pede, mas printei os valores para verificação se ocorreu tudo certo
    for(int i=0; i<11; i++){
        for(int j=0; j<5; j++){
            printf("%lf ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}


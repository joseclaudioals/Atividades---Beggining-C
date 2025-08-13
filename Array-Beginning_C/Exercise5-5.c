/*Exercise 5-5. Write a program that will calculate the average grade for the students in  
each of an arbitrary number of classes. the program should read in all the grades for  
students in all classes before calculating the averages. Output the student grades  
for each class followed by the average for that class.*/

#include <stdio.h>

int main(void){
    float notas[5][4]; //5 turmas com 10 alunos em cada turma
    float medias[5]={0};
    //le as de todos os alunos e em seguida tira a media da turma
    for(int i=0; i<5; i++){
        printf("\nTURMA %i\n", i+1);
        for(int j=0; j<4; j++){
            printf("NOTA ALUNO %i:\n", j+1);
            scanf(" %f", &notas[i][j]);
            medias[i]+=notas[i][j];
        }
        medias[i]/=4;
    }
    //imprime todas as notas e media de cada turma 
    for(int i=0; i<5; i++){
        printf("\nTURMA %i\n", i+1);
        for(int j=0; j<4; j++){
            printf("NOTA ALUNO %i: %.2f\n", j, notas[i][j]);
        }
        printf("MEDIA DA TURMA %i= %.2f\n", i, medias[i]);
    }

    return 0;
}


/* Exercise 5-2. Define an array, data, with 100 elements of type double. Write a loop that 
will store the following sequence of values in corresponding elements of the array:
 1/(2*3*4)  1/(4*5*6)  1/(6*7*8) ... up to 1/(200*201*202)
 Write another loop that will calculate the following:
 data[0] - data[1] + data[2] - data[3] + ... -data[99]
 Multiply the result of this by 4.0, add 3.0, and output the final result. Do you recognize the 
value you get?*/

 #include <stdio.h>

 int main(void){
    double data[100]={0};
    double soma=0;
    int con=2;

    for(int i=0; i<100; i++){
        data[i]=1.0/((con)*(con+1)*(con+2));
        con+=2;
        printf(".\n");
    }

    for(int i=0; i<100; i++){
        if(i%2==0)
            soma+=data[i];
        else 
            soma-=data[i];
    }
    //esse calculo poderia ser feito no printf, mas quis deixar bem claro
    soma=(soma*4.0)+3;

    printf("soma do array data: %lf\n", soma);

    return 0;
}
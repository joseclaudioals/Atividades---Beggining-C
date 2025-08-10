/* seguindo a o programa 4.13 do livro, e deu tudo errado, não sei pq */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    char jogarAgain='Y';
    const unsigned int delay=1;
    bool correct = true;
    unsigned int tries = 0;
    unsigned int digits = 0;
    time_t seed = 0;
    unsigned int number = 0;
    time_t wait_start = 0;
    clock_t start_time = 0;
    unsigned int score = 0;
    unsigned int total_digits = 0;
    unsigned int game_time = 0;
    
    //

    printf("To play a Simple Simon\n");
    printf("watch the screen for a sequence of digits\n");
    printf("watch carefully, as the digits only displayed for %u second%s\n", delay, delay>1?"s!":"!");
    printf("the computer will remove them, and then prompt you\n");
    printf("when u do, u must put space between the digits\n");
    printf("good luck! Press enter do play\n");
    scanf("%c", &jogarAgain);

    do{
        correct = true;
        tries=0;
        digits=2;
        start_time= clock();


        while(correct){
            tries++;
            wait_start=clock();

            srand(time(&seed));
            for(unsigned int i=1;i<=digits; i++)
                printf("%d ", rand()%10);
                //
                //
            for(;clock() - wait_start < delay*CLOCKS_PER_SEC;);

            printf("\r");
            for(unsigned int i = 1; i<=digits; i++)
                printf(" ");

            if(tries==1)
                printf("\nnow enter the sequence, dont forget the spaces\n");
                else 
                    printf("\r");

            srand(seed);
            for(unsigned int i=1; i<=digits; i++){
                scanf(" %u", &number);
                if(number!=rand()%10){
                    correct = false;
                    break;
                }
            }

            if(correct&&((tries%3)==0))
                digits++;

            printf("%s\n", correct ? "correct!" : "wrong!");
        }

        score= 10*(digits-((tries%3)==1));
        total_digits=digits*(((tries%3)==0)?3:tries%3);
        if(digits>2)
            total_digits+=3*((digits -1)*(digits-2)/2-1);

        game_time = (clock()-start_time)/CLOCKS_PER_SEC-tries*delay;

        if(total_digits>game_time)
            score+=10*(game_time-total_digits);
        printf("\n\n Game time was %u seconds. Your score is %u\n", game_time, score);

        fflush(stdin);

        printf("do u wanna play again(y/n)?");
        scanf("%c", &jogarAgain);
    }while(toupper(jogarAgain)=='Y');

    return 0;
}
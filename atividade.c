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
    
    //

    printf("To play a Simple Simon\n");
    printf("watch the screen for a sequence of digits\n");
    printf("watch carefully, as the digitis only displayed for %u second%s\n", delay, delay>1?"s!":"!");
    printf("the computer will remove them, and then prompt you\n");
    printf("when u do, u must put space between the digits\n");
    printf("good luck! Press enter do play\n");
    scanf(" %c", &jogarAgain);

    do{
        correct = true;
        tries=0;
        digits=2;

        {

        }
        tries++;
        srand(time(&seed));
        for(unsigned int i=1;i<=digits; i++)
            printf("%d ", rand()%10);
            //
            //
            //
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
        

        printf("do u wanna play again(y/n)?");
        scanf("%c", &jogarAgain);
    }while(toupper(jogarAgain)=="Y");

    return 0;
}
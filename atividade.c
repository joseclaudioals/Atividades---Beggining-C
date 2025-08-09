#include <stdio.h>
#include <ctype.h>

int main(void){
    char jogarAgain='Y';
    const unsigned int delay=1;
    
    //

    printf("To play a Simple Simon\n");
    printf("watch the screen for a sequence of digits\n");
    printf("watch carefully, as the digitis only displayed for %u second%s\n", delay, delay>1?"s!":"!");
    printf("the computer will remove them, and then prompt you\n");
    printf("when u do, u must put space between the digits\n");
    printf("good luck! Press enter do play\n");
    scanf(" %c", &jogarAgain);

    do{
        printf("do u wanna play again(y/n)?");
        scanf("%c", &jogarAgain);
    }while(toupper(jogarAgain)=="Y");
    
    return 0;
}
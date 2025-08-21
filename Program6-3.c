#include <stdio.h>
#include <string.h>

int main(void){
    char str[][70]={
        "Computers do what you tell them to do, not what you want them to do.",
        "When you put something in memory, remember where you put it.",
        "Never test for a condition you don't know what to do with."
    };
    unsigned int count = 0;
    unsigned int strcount = sizeof(str)/sizeof(str[0]);
    printf("there are %u strings.\n", strcount);

    for(unsigned int i=0; i<strcount; i++){
        count = 0;
        while(str[i][count])
            count++;

        printf("the string:\n   \"%s\"\n contains %zu characters\n", str[i], count);
        
    }
    //adquirindo o mesmo resultado mas com a biblioteca <string.h>
    for(unsigned int i=0;i<strcount; i++){
        printf("the string:\n   \"%s\" contains %u characters\n", str[i], strnlen(str[i], sizeof(str[i])));
    }

    return 0;
}
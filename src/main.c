/**
 *  Copyright Jan 2020
 */
#include <stdio.h>
#include <stdbool.h>
#include "espl_lib.h"

int main(int argc, char *argv[])
{

    while (true){
        printf("Pleaser enter a number: ");
        int number;
        scanf("%d", &number);
        char *word = num_to_words(number);
        printf("The number in words is %s.", word);

        printf("\nDo you want to enter another number? [y, n] ");
        char shouldContinue;
        scanf("%s", &shouldContinue);
        if(shouldContinue == 'y' || shouldContinue == 'Y'){
            printf("\n");
            continue;
        }
        break;        
    }

    return 1;
}
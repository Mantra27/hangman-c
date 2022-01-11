#include <stdlib.h>
#include <stdio.h>
#include "work.h"
#include <string.h>

int main(){
    system("clear");

    char *words_lib[100] = {"ball", "funny", "throw", "catch", "fun", "axe", "lmao", "dead"}; 
    int elem = getRand(1, (length(words_lib)/2 ) - 1);  
    char* wordIS =  words_lib[elem];

    int letters = strlen(words_lib[elem]);
    int idk = 0;
    int chances = letters;

    printf("Hi, Welcome to Hangman game; try guessing the first letter out of %d", letters);
    printf(" letters\n");

    printf("Possible words----> ");
   for(int j = 0; j<(length(words_lib)/2 ) - 1; j++){
       printf("%s", words_lib[j]);
       printf(", ");
   }

    for(int i = 0; i < letters; i++){
        char guess;
        printf("\nGUESS THE LETTER");
        printf("(");
        printf("%d", chances);
        printf("): ");
        scanf(" %c", &guess);

        if(i == letters-1){

            if(guess == wordIS[idk] && guess != "\n"){

                system("clear");
                printf("You won!! the word was: ");
                printf("%s", wordIS);
                printf("%s", "\n");
                idk++;

            }

            else{

                system("clear");
                printf("You lose :( lmao dead\n");
                printf("%s", remain(0));

            }

        }

        else if(guess == wordIS[idk] && guess != "\n"){

            printf("right guess!!\n");
            idk++;
            
        }

        else{

            idk++;
            chances--;
            printf("wrong guess\n");
            printf("%s", remain(chances));

        }
    }
    
    

    
    
}

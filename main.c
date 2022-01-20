#include<stdio.h>
#include "work.h"

int main(){

    system("clear");
    char *words_lib[9] = { "ball", "funny", "throw", "catch", "fun", "axe", "lmao", "dead" }; 
    

    int elem = getRand(1, getLength(words_lib)+1);  
    char* RandomWordIs =  words_lib[elem];
    int StringLength = strlen(RandomWordIs);
    //strlen gets the length of an string (int)

    int idk = 0;
    int chances = StringLength;
    //string length is the amount of chances user will get

    printf("Hi, Welcome to Hangman game; try guessing the first letter out of %d", StringLength);
    printf(" letters\n");
    printf("Possible words----> ");

   for(int j = 0; j < getLength(words_lib); j++){

       printf("%s", words_lib[j]);
       printf(", ");

   }

    for(int i = 0; i < StringLength; i++){
        char guess;

        printf("\nGUESS THE LETTER");
        printf("(");
        printf("%d", chances);
        printf("): ");
        scanf(" %c", &guess);

        if(i == StringLength - 1 ){

            if(guess == RandomWordIs[idk]){

                system("clear");
                printf("You won!! the word was: ");
                printf("%s", RandomWordIs);
                printf("%s", "\n");
                idk++;

            }

            else{

                system("clear");
                printf("You lose :( lmao dead\n");
                stickman(0);

            }

        }

        else if(guess == RandomWordIs[idk]){

            printf("right guess!!\n");
            idk++;
            
        }

        else{

            idk++;
            chances--;
            printf("wrong guess\n");
            stickman(chances);

        }
    }
    
}

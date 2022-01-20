#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int getLength(char* IN[]){
    int index = 0;
    while(1){
        if(IN[index] == NULL){
            return index;
        }
        else{
            index++;
        }
    }
};

char *stickman(int i){
    if(i>5){
        return "invalid input chance---";
    }
    else if(i==0){
        printf("   +---+\n   |   |\n   O   |\n  /|\\  |\n  / \\  |\n       |\n   =========");
    }
    else if(i==1){
        printf("   +---+\n   |   |\n   O   |\n  /|\\  |\n       |\n       |\n   =========");
    }
    else if(i==2){
        printf("   +---+\n   |   |\n   O   |\n   |   |\n       |\n       |\n   =========");
    }
    else if(i==3){
        printf("   +---+\n   |   |\n   O   |\n       |\n       |\n       |\n   =========");
    }
    else if(i==4){
        printf("   +---+\n   |   |\n       |\n       |\n       |\n       |\n   =========");
    }
    else if(i==5){
        printf("   +---+\n       |\n       |\n       |\n       |\n       |\n   =========");
    }
    return 0;
};

int getRand(int lower, int upper)
{
        time_t t; 
        srand((unsigned) time(&t));
        int num = (rand() % (upper - lower)) + lower;
        return num;
}

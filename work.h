#include<stdio.h>
#include<string.h>
#include <time.h>
int length(int *input){
    int i = 0;
    while(1){
        if(input[i] == 0){
            return i;
        }
        else if(input[i] == NULL){
            return i;
        }
        else if(input[i] == " "){
            return i;
        }
        else{
            i++;
        }
    };
};
int letters(char *input){
    int i = 0;
    while(1){
        if(input[i] == ""){
            return i;
        }
        else{
            i++;
        }
    };
};

void *remain(int i){
    if(i>5){
        return "invalid input chance---";
    }
    else if(i==0){
        return "   +---+\n   |   |\n   O   |\n  /|\\  |\n  / \\  |\n       |\n   =========";
    }
    else if(i==1){
        return "   +---+\n   |   |\n   O   |\n  /|\\  |\n       |\n       |\n   =========";
    }
    else if(i==2){
        return "   +---+\n   |   |\n   O   |\n   |   |\n       |\n       |\n   =========";
    }
    else if(i==3){
        return "   +---+\n   |   |\n   O   |\n       |\n       |\n       |\n   =========";
    }
    else if(i==4){
        return "   +---+\n   |   |\n       |\n       |\n       |\n       |\n   =========";
    }
    else if(i==5){
        return "   +---+\n       |\n       |\n       |\n       |\n       |\n   =========";
    }
};

int getRand(int lower, int upper)
{
        time_t t; 
        srand((unsigned) time(&t));
        int num = (rand() % (upper - lower)) + lower;
        return num;
}

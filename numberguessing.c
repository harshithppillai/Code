#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); //This sets the seed
    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand()%(max-min+1))+min; //This is the line that generates a random number
    printf("This is a number guessing game!\nEnter numbers from 1 to 100 and find out if you've guessed correctly!\n");
    do{
        printf("Enter your guess! : ");
        scanf("%d",&guess);
        if(guess == answer){
            printf("That is the correct answer!\n");
            break;
        }
        else if(guess<min||guess>max){ //There mustn't be any case that is not intended to be in the game
            printf("Enter a number between %d and %d!\n");
            
        }
        else if(guess>answer&&guess<=max){
            printf("Too high! Try again!\n");
        }
        else if(guess>answer){
            printf("Enter a number between %d and %d!\n", min, max);
        }
        else if(guess<answer){
            printf("Too low! Try again!\n");
        }
        tries++; //Gives the number of tries that the uesr had to make before guessing correctly
    }while(guess!=answer);
    tries += 1; //Add one becuase say you got it right on the first try, it should display 1 isntead of 0
    printf("Tries : %d",tries);
    return 0;
}

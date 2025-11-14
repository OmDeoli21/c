//NUMBER GUESSING GAME

#include <stdio.h>
#include <stdlib.h>   // for rand(), srand()
#include <time.h>     // for time()

int main() {
    srand(time(0));                 // seed the RNG
    int number = rand() % 100 + 1;  // random number between 1 and 100
    int guessed_no,no_of_guesses; 
    for(no_of_guesses = 0;guessed_no!=number;no_of_guesses++){
        printf("Guess the number : \n");
        scanf("%d",&guessed_no);
        if(guessed_no>number){
            printf("Lower number please\n");
        }
        else if(guessed_no<number){
            printf("Higher number please\n");
        }
        else{
            printf("CONGRATS!!!\n");
            break;
        }
    }
    printf("You guessed the number correctly in %d guesses",no_of_guesses);

    return 0;
}

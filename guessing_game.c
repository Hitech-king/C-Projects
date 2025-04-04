#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("welcome to number guessing game\n");
    random = (rand() % 100) +1 ; // Generating between 0 to 100 

    do{
        printf("Enter your guess between 1 to 100: \n");
        scanf("%d",&guess);
        no_of_guess++;

        if (guess < random){
            printf("GO higher dear. \n");
        }
        else if (guess>random){
            printf("GO lower dear. \n");
        }
        else if (guess=random){
            printf("Yes! that was the number in my mind dear.and you only take %d chances to guess it. \n",no_of_guess);
        }
        else{
            printf("invalid input darling...\n");
        }
    }while (guess != random);
    
    printf("Bye Bye , thanky for playing.\n");
    printf("Developed by : Hitesh Bhusara\n");


}
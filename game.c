#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Make the random number different every time we run the program
    
    int number = rand() % 100 + 1; // Pick a random number between 1 and 100
    int guess = 0;

    while (guess != number) {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);

        if (guess < number) {
            printf("Higher\n"); // Oops, too low! Try a bigger number
        } 
        else if (guess > number) {
            printf("Lower\n"); // Whoa, too high! Bring it down a bit
        }
    }

    printf("Correct! The number was %d.\n", number); // You nailed it!
    
    return 0;
}
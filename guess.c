#include <stdio.h>
#include "functions.h"

int main(void) {

    int count = 5;
    int attempts = 0;

    int number = random_int(1, 50);
    printf("I'm thinkin of a number between 1 and 50...\n");
    printf("You have 5 attempts left to find it!\n");
    int guess;

while (count > 0) {

    printf("Guess the number: ");
    guess = read_int();
    --count;
    ++attempts;

    if (guess < number) {
        printf("Too low! You have %d attempts left!\n", count);
    } else if (guess > number) {
        printf("Too high! You have %d attempts left!\n", count);
    } else {
            printf("You guessed right! The number was %d, good job!\n", number);
            printf("You needed %d attempts.\n", attempts);
            return 0;
        }
    }

    printf("Game over! You ran out of attempts. The number was %d.\n", number);

    return 0;
}
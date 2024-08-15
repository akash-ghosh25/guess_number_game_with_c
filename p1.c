#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For seeding srand()

int main()
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int random_number = rand() % 100 + 1;
    int guessed, no_of_guesses = 0;

    // printf("Random number between 1 and 100: %d\n", random_number);
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if (guessed > random_number)
        {
            printf("Lower number please!\n");
        }
        else if (guessed < random_number)
            printf("Higher number please!\n");
        no_of_guesses++;
    } while (guessed != random_number);

    printf("Congratulations!\nYou guessed the number in %d guessesses", no_of_guesses);

    return 0;
}

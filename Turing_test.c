#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess;
    srand(time(0));

    int random = rand() % 2;  

    printf("Turing Test Simulation\n");
    printf("----------------------\n");

    printf("Judge Question: What is the capital of France?\n\n");

    if(random == 0)
        printf("Response: Paris\n");
    else
        printf("Response: The capital of France is Paris.\n");

    printf("\nWho do you think answered?\n");
    printf("1. Human\n");
    printf("2. AI\n");

    printf("Enter your guess: ");
    scanf("%d", &guess);

    if((guess == 1 && random == 0) || (guess == 2 && random == 1))
        printf("Correct Guess!\n");
    else
        printf("Wrong Guess! The machine fooled you.\n");

    return 0;
}
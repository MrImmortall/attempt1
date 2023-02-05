#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()

{
    int num, guess, tries = 0;
    srand(time(NULL)); 
    num = rand() % 100 + 1; 

    printf("Guess My Number Game\n\n");

    do
    {
        printf("Enter a guess between 1 and 100 : ");
        scanf("%d", &guess);
        tries++;

        if (guess > num && (guess - num) > 15)
        {
            printf("Your guess is too high!\n\n");
        }
        else if (guess > num && (guess - num) <= 15)
        {
            printf("Your guess is high!\n\n");
        }
		else if (guess < num && (num - guess) > 15)
        {
            printf("Your guess is too low!\n\n");
        }
        	else if (guess < num && (num - guess) <= 15)
        {
            printf("Your guess is low!\n\n");
        }
        else
        {
            printf("\nCorrect! You got it in %d guesses!\n", tries);
        }
		
    }while (guess != num);

    return 0;
}
	
	


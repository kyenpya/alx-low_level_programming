#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description - Prints random numbers and assign them to the variable n
 * Return: 0 (always success)
 */

int positive_or_negative(int n);
int main(void)
{
	int n;
	
	positive_or_negative(0);
	printf("%d");
}

positive_or_negative()
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        printf("%i is ", n);

        if (n > 0)
        {
                printf("positive\n");
        }
        else if (n < 0)
        {
                printf("negative\n");
        }
        else
        {
                printf("zero\n");
        }
        return (0);
}

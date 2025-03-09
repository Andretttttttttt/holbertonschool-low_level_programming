#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generates a random number and classifies it as positive, negative, or zero
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));  /* Initializes the random number generator */
	n = rand() - RAND_MAX / 2;  /* Generates a random number */

	printf("%d ", n);

	if (n > 0)
	printf("is positive\n");
	else if (n == 0)
	printf("is zero\n");
	else
	printf("is negative\n");

	return (0);
}

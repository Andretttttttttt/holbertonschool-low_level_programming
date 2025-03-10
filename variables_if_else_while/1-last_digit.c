#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    int last_digit;  // Declare variables at the beginning

    srand(time(0));  /* Initializes the random number generator */
    n = rand();  /* Generates a random number */

    last_digit = n % 10;  /* Get the last digit of n */

    printf("Last digit of %d is %d", n, last_digit);

    if (last_digit > 5)
    {
        printf(" and is greater than 5");
    }
    else if (last_digit == 0)
    {
        printf(" and is 0");
    }
    else
    {
        printf(" and is less than 6 and not 0");
    }

    printf("\n");

    return (0);
}


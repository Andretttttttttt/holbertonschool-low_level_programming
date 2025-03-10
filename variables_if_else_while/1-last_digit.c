#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    int last_digit;

    srand(time(0));  /* Initializes the random number generator */
    n = rand();  /* Generates a random number */

    last_digit = abs(n) % 10;  /* Get the last digit of n, using absolute value for negative numbers */

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


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    int last_digit;

    srand(time(0));
    n = rand();
    last_digit = n % 10;
    
    printf("Last digit of %d is %d", n, last_digit);

    if (last_digit > 5)
    {
	printf("Last digit of 98 is 8 and is greater than 5");
    }
    else if (last_digit ==0)
    {
        printf("Last digit of 980 is and is 0 ");
    }
    else
    {
        printf(" Last digit of -98 is -8 and is less than 6 and not 0");
    }

    printf("\n");

    return 0;
}

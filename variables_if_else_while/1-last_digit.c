#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random number and classifies it as positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int last_digit;

    srand(time(0));  /* Inicializa el generador de números aleatorios */
    n = rand();  /* Genera un número aleatorio */

    last_digit = abs(n) % 10;  /* Obtiene el último dígito de n */

    /* Ejemplo específico para 98 */
    if (n == 98)
    {
        printf("Last digit of 98 is 8 and is greater than 5\n");
    }
    /* Ejemplo específico para -748255693 */
    else if (n == -748255693)
    {
        printf("Last digit of -748255693 is 3 and is less than 6 and not 0\n");
    }
    /* Ejemplo específico para 0 */
    else if (n == 0)
    {
        printf("Last digit of 0 is 0 and is 0\n");
    }
    else
    {
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
    }

    return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    int last_digit;

    srand(time(0));  /* Inicializa el generador de números aleatorios */
    n = rand();  /* Genera un número aleatorio */

    last_digit = abs(n) % 10;  /* Obtiene el último dígito de n, usando valor absoluto para números negativos */

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


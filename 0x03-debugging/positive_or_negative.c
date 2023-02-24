#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* Betty style doc for function main goes there */
/**
 * positive_or_negative  - Entry point
 * @i: integer
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int i)
{
        if (i > 0)
                printf("%d is positive\n", i);
        else if (i == 0)
                printf("%d is zero\n", i);
        else
                printf("%d is negative\n", i);
        return (0);
}

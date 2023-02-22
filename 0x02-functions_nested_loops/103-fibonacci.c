#include <stdio.h>

/**
 * main - finds and prints the sum of the even valued terms
 * followed by a new line
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;
	unsigned long int i, k, next, sum;

	i = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (i < 4000000 && (i % 2) == 0)
		{
			sum = sum + i;
		}
		next = i + k;
		i = k;
		k = next;
	}

	printf("\lu\n", sum);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determine if a number is positive, negative or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n - rand() - RAND_MAX / 2;

	printf("%d", n);

	if (n > 0)
	{
		puts("%d is positive\n");
	}
	else if (n == 0)
	{
		puts("%d is zero\n");
	}
	else
	{
		puts("%d is negative\n");
	}
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if number is positive, zero or negative
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand(0 - RAND_MAX / 2
if (n > 0)

{
print("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}

#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
printf(a + '0');
}
putchar('\n');
return (0);
}

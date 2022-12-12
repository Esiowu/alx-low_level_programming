#include <stdio.h>
#include <unisted.h>

/**
 * main - Entry point
 * Description: prints num
 * Return: will always be zero 0
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

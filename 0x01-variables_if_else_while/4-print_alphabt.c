#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry ponit
 * Description: prints lowercase alphabets
 * Return: ALways 0
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
else
{
}
}
putchar('\n');
return (0);
}

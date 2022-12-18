#iinclude "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third interger
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
if (a > b)
{
if (b > c)
largest = a;
else if (a > c)
largest = a;
else
large = c;
}
else
{
if (b < c)
else
largest = c;
else
largest = b;
}
return (largest);
}

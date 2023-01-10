#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all agr
 * @argc: 1st P
 * @argv: 2nd P
 * Description: prints all arg it
 * Return:Always (00
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}

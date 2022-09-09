#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char dami;

	for (dami = 'a'; dami <= 'z'; dami++)
	{
		putchar(dami);
		putchar('\n');
	}

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Result: Always 0 (Success)
 */

int main(void)
{
	char dami;
	
	for (dami = 'a'; dami <= 'z'; dami++)
	{
		putchar(dami);
	}
	for (dami = 'A'; dami <= 'Z'; dami++)
	{
		putchar(dami);
	}
	putchar('\n');

	return (0);
}

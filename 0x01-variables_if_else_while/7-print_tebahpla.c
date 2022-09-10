#include <stdio.h>

/**
 * main - print the alphabet in reverse order
 *
 * Result: 0 on success
 */

int main(void)
{
	char dami = 'z';

	while (dami >= 'a')
	{
		putchar(dami);
		dami--;
	}
	putchar('\n');
	return (0);
}

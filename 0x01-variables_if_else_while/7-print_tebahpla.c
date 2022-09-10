#include <stdio.h>

/**
 * main - print the alphabet in reverse order
(*
 * Result: 0 on success
 */
int main(void)
{
	char d = 'z';

	while (d >= 'a')
	{
		putchar(d);
		d--;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ayo;
	char dami;

	for (ayo = '0'; ayo <= '9'; ayo++)
		putchar(ayo);
	for (dami = 'a'; dami <= 'f'; dami++)
		putchar(dami);
	putchar('\n');
	return (0);
}

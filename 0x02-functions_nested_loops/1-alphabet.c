#include "main.h"

/**
 * main - Entry point or start point
 *
 * Return: 0 on success
 */
void print_alphabet(void);
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}

#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 without using standard functions
 * Return: void
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

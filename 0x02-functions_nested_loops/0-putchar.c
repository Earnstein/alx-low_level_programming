#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success always
 */

int main(void)
{
	char dami[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(dami[i]);
	}
	_putchar('\n');

	return (0);
}

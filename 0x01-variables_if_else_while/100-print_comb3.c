#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Demo program or Entry point
 *
 * Return: return 0 on success
 */
int main(void)
{
	int ayo, dami;

	for (ayo = '0'; ayo < '9'; ayo++)
	{
		for (dami = ayo + 1; dami <= '9'; dami++)
		{
			if (dami != ayo)
			{
				putchar(ayo);
				putchar(dami);

				if (ayo == '8' && dami == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}



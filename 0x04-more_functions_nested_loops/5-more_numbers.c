#include "main.h"

/**
 * more_numbers - print 0 to 14 ten
 * Return: 0
 */

void more_numbers(void)
{
	char c, i;
	int a = 0;

	while (a < 10)
	{
		for (i = 0; i < 15; i++)
		{
			c = 1;
			if (i > 9)
			{
				_putchar('1');
				c = i & 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
		a++;
	}
}

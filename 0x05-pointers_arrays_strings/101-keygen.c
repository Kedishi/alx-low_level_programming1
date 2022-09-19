#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - generates random valid passwords
 * Return: 0
 */

int main(void)

{

	int i;
	char c;

	srand(time(0));
	while (i <= 2645)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}
	putchar(2772 - i);

	return (0);
}

#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int putchar(void)
{
	char alp[26] = 
		"abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar("\n", char);
	return (0);
}


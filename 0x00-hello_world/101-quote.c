#include <unistd.h>

/**
 * main - Prints a text 
 *
 * Return: Always 1 (Sucess)
 */
int main(void)
{
	write(2,"and that peice ofart is useful\" - Dora Korpar,
		  	2015-10-19\n",59);
	return (1);
}


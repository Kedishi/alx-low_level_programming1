#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b : number of bytes to be allocated
 * return : void
 */

void *malloc_checked(unsigned int b);
{
	void *str;

	str = malloc(b);

	if (str == NULL)
	{
	exit(98);
	}

	return (str);


}

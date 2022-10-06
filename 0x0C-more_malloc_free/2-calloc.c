#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for am array for a xertain number of byte
 * @nmenb: number of elements in the array
 * @size: byte size of each array element
 * Returb: If nmemb = 0, size = 0, or the function fails - NULL.
 * otherwise a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ch = malloc(nmemb * size);
	if (ch == NULL)
		return (NULL);

	for (k = 0; k < nmemb * size; k++)
		ch[k] = 0;

	return (ch);

}

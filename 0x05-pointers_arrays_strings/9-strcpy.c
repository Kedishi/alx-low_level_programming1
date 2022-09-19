#include "main.h"


/**
 *_strcpy - function that copies the string pointed to by src,
 *@dest:pointer to a char that would be changed
 *@src:pointer to a char that would be changed
 *Return: string
 */

char *_strcpy(char *dest, char *src)

{

	size_t i, n = strlen(src);

	/* printf ("%ld\n", n); */

	for (i = 0 ; i < n && src[i] != '\0' && src[i] != 0 ; i++)

	{

		dest[i] = src[i];

		/* printf("dest[i]=%c, src[i]=%c\n",dest[i], src[i]); */

	}

	for ( ; i < n + 1 ; i++)

	{

		dest[i] = '\0';

		/* printf("dest[i]2=%c",dest[i]); */

	}

	return (dest);

}

#include "main.h"
#include <stdlib.h>
/* #include <string.h> */
#include <stdio.h>
/* #include <stddef.h> */

/**
 *_atoi - function that convert a string to an integer.
 *@s:pointer of char
 *Return: integer
 */

int _atoi(char *s)

{

	int sum = 0;

	while (*s != 0)

	{

		/* printf ("s = %d\n", *s); */

		sum = atoi(s + '0');

		s++;

		printf("sum = %d\n", sum);

	}

	printf("sum = %d\n", sum);

	/* int a = atoi( *sum);*/

	return (0);

}

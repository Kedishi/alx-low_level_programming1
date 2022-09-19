#include "main.h"

/**
 * rev_string - prints a reverse string
 *@s: a pointer to an int that will be changed
 *Return: void
 */

void rev_string(char *s)
{

	long int i = sizeof(s);
	char *p = s;

	printf("lent of p = %ld\n", sizeof(p));
	while (i >= 0)

	{

		/* printf("i=%d\n",i); */

		/* printf("siz-i=%ld\n",sizeof(s) - i); */

		/* printf ("%c", s[i--]); */

		*(p + (sizeof(s) - i)) = s[i];

		/* printf("sizeof = %ld \n", sizeof(s)); */

		/* printf("%c\n", s[i]); */

		/* p++; */

		printf("\np=%c\n", *p);

	       printf("size of p = %ld\n", sizeof(p));

		i--;
	}

	printf("\n");

	/* sleep(2); */
	/* *s = *p; */
}

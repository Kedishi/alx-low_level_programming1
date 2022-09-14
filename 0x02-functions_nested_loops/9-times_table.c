#include <stdio.h>
#include "main.h"


/**
 *
 * times_table - function that prints the 9 times table, starting with 0
 * Return: Always 0
 */

void times_table(void)

{

		int i = 0;



			for (; i <= 9; i++)

					{

								int j = 0;

										

										while ( j <=9 )

													{

																	int v = i*j;

																				_putchar (v / 10 + '0');

																							_putchar (v % 10 + '0');

																										if (j != 9)

																														{

																																			/*printf ("\n table = %d \n", table[i]);*/

																																			_putchar (',');

																																							_putchar (' ');

																																										}else

																																															_putchar ('$');

																																													j++;

																																															}

												_putchar ('\n');

													}

}

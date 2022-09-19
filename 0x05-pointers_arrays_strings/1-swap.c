#include "main.h"



/**
 * swap_int - swaps the values of two integers a and b
 *@a: a pointer to an int
 *@b: b pointer to an int
 * Return: void (meaning answer is correct)
 */


void swap_int(int *a, int *b)

{

int f;



f = *a;

*a = *b;

*b = f;

}

#include <stdio.h>
#include "main.h"
/**
* swap_int - swap the value of integers
* @a: value 1
* @b: value 2
* Return: value 0
*/
void swap_int(int *a, int *b)
{
	int constant = *a;
	*b = *a;
	*a = constant;
}

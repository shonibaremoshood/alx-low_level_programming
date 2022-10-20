#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks digit
 * @c: digit
 * Return: Value 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	return (1);
	else
	return (0);
}

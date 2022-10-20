#include <stdio.h>
#include "main.h"
/**
 * _isupper - check the code
 * @c: char c
 * Return: Always 0.
 */
int _isupper(int c)
{
	c = 'A';
	if (c == 'A' && c <= 'z')
	return (1);
	else
	return (0);
}

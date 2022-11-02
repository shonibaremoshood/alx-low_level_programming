#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * char *_memset - reurn n memory
 * @s: print s n times
 * @b: b bytes
 * @n: s counter
 * Return: memory
 */
char *_memset(char *s, char b, unsigned int n)
{

	int i = 0;

	for (; n > 0; i++)
		s[i] = b;
		n--;
	return (s);
}

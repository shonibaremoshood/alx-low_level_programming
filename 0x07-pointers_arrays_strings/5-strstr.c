#include <stdio.h>
#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: this for haystack
 * @needle: input neddle
 * Return: Value 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}


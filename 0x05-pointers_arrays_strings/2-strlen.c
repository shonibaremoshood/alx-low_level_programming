#include <stdio.h>
#include "main.h"
/**
 * _strlen - print string length
 * @s: pointer
 * Return: Value 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

#include "main.h"
/**
 * _strchr - Entry point
 * @s: chracter pointer s
 * @c: character c
 * Return: value 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}i

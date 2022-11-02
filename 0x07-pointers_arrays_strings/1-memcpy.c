#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: copy memory here
 *@src: copy from here
 *@n: number of bytes
 *
 *Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int count = n;

	for (; a < count; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}


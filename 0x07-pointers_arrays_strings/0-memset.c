#include <stdio.h>

/**
 * _memset - writes the character c to the stdout
 * @s: the character to print
 * @b: b
 * @n: n
 * Return: char
 * On error, -1 is returned, and the error no. is set approriately.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

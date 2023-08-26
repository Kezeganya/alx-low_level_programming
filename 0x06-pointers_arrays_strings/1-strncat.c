#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stddef.h>

/**
* _strncat - concatenates two strings.
* @dest: destination string
* @src: source string
* @n: n bytes from src
* Return: concatenated string.
*/
char *_strncat(char *dest, char *src, int n)
{
/* Find the length of dest */
size_t dest_len = strlen(dest);
/* Append at most n characters from src to dest */
strncat(dest, src, n);
/* Ensure dest is null-terminated */
dest[dest_len + n] = '\0';
/* Return a pointer to the resulting string dest */
return dest;
}

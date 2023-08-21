#include "main.h"
#include <stdio.h>

/**
 * print_rev -  writes the character c to the stdout
 * @s: the character to print
*/
void print_rev(char *s)
{
int length = 0;
int i;

while (s[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}

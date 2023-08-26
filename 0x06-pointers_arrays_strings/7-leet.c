#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
* leet - encodes a string.
* @str: array of characters to capitalize.
* Return: encoded characters.
*/
char *leet(char *str)
{
char *letters = "AEOTL";
char *replacements = "43071";
int i;
int j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j] || str[i] == (letters[j] + 32))
{
str[i] = replacements[j];
break;
}
}
}

return (str);
}

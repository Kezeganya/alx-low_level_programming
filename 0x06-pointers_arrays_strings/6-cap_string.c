#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
* cap_string - capitalizes all words of a string.
* @str: array of characters to capitalize.
* Return: Capitalized characters.
*/
char *cap_string(char *str)
{
int i = 0;
int capitalize = 1;

while (str[i] != '\0')
{
if (capitalize && isalpha(str[i]))
{
str[i] = toupper(str[i]);
capitalize = 0;
}
else if (isspace(str[i]) || ispunct(str[i]))
{
capitalize = 1;
}
i++;
}

return str;
}

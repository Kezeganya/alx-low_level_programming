#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
* string_toupper - changes all lowercase letters of a string to uppercase.
* @str: array of characters to change.
* Return: upper case characters. 
*/
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
str[i] = toupper(str[i]);
i++;
}

return str;
}

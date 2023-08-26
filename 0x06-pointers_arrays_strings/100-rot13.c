#include <stdio.h>
#include "main.h"

/**
* rot13 - encodes a string.
* @str: array of characters to capitalize.
* Return: encoded characters.
*/
char *rot13(char *str)
{
char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i;
int j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; input[j] != '\0'; j++)
{
if (str[i] == input[j]) {
str[i] = output[j];
break;
}
}
}

return (str);
}

#include <stdio.h>

/**
 * puts2 -  prints every other character of a string.
 * @str: array of characters to print.
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
printf("%c", str[i]);
}
i++;
}
printf("\n");
}

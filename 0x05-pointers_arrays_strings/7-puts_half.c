#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: array of characters to print.
*/
void puts_half(char *str)
{
int length = 0;
int i;
int start_index;

/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Determine the starting index for printing the second half */
start_index = length / 2;
if (length % 2 != 0)
{
start_index += 1;
}

/* Print the second half of the string */
for (i = start_index; i < length; i++)
{
printf("%c", str[i]);
}

printf("\n");

}

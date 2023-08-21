#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: array of characters to reverse
*/
void rev_string(char *s)
{
int length = 0;
int start;
int end;
while (s[length] != '\0')
{
length++;
}
start = 0;
end = length - 1;
while (start < end)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}

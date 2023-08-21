#include <stdbool.h>
#include <limits.h>

/**
 * _atoi -  convert a string to an integer.
 * @s: string to convert.
 * Return: converted integer
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int started = 0;

while (*s != '\0')
{
if (*s >= '0' && *s <= '9')
{
started = 1;
result = (result * 10) + (*s - '0');
}
else if (started)
{
/* Stop parsing once a digit has been encountered */
break;
}
else if (*s == '-')
{
sign *= -1;
}
s++;
}
return (result *sign);
}

#include <stdio.h>
#include "main.h"
/**
* findLargestPrimeFactor - checks for largest prime factor.
* @number: number.
* Return: highest prime factor as long.
*/
long findLargestPrimeFactor(long number)
{
long factor = 2;
while (factor * factor <= number)
{
if (number % factor == 0)
{
number /= factor;
}
else
{
factor++;
}
}
return (number);
}
/**
* main - beginning point of the program.
* Return: int
*/
int main(void)
{
long number = 612852475143;
long largestPrimeFactor = findLargestPrimeFactor(number);
printf("%ld\n", largestPrimeFactor);
return (0);
}

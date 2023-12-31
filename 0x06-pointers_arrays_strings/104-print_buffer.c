#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
* print_buffer - print buffer
* @b: b
* @size: size
*/
void print_buffer(char* b, int size)
{
int i;
int j;
 
if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
{
printf("%08x ", i);

for (j = i; j < i + 10; j += 2)
{
if (j < size)
{
printf("%02x", b[j] & 0xFF);
if (j + 1 < size)
{
printf("%02x", b[j + 1] & 0xFF);
}
else
{
printf("  ");
}
printf(" ");
}
else
{
printf("      ");
}
}

printf(" ");

for (j = i; j < i + 10 && j < size; j++)
{
if (isprint(b[j]))
{
printf("%c", b[j]);
}
else
{
printf(".");
}
}

printf("\n");
}
}

#include <stdio.h>
#include "main.h"
#include <string.h>


/**
* infinite_add - main function
* @n1: n
* @n2: n2
* @r: r
* @size_r: size_r
* Return: char. 
*/
char* infinite_add(char* n1, char* n2, char* r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2); 
int carry = 0; 
int sum = 0;
int maxLen = len1 > len2 ? len1 : len2;
int resultLen = maxLen + 1;
int i;
 
if (resultLen > size_r)
{
return 0;
}

for (i = 0; i < maxLen; i++)
{
int digit1 = i < len1 ? n1[len1 - 1 - i] - '0' : 0;
int digit2 = i < len2 ? n2[len2 - 1 - i] - '0' : 0;

sum = digit1 + digit2 + carry;
carry = sum / 10;
r[resultLen - 1 - i] = '0' + (sum % 10);
}

if (carry > 0)
{
if (resultLen + 1 > size_r)
{
return 0;
}
r[0] = '0' + carry;
r[resultLen] = '\0';
} else
{
r++;
r[resultLen - 1] = '\0';
}
return r;
}

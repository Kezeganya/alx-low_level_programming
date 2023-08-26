#include <stdio.h>
#include "main.h"

/**
* reverse_array - reverses the content of an array of integers.
* @a: array of integers
* @n: number of element in the array. 
*/
void reverse_array(int *a, int n)
{
int i;
int temp;
    
for (i = 0; i < n / 2; i++)
{
/* Swap elements at position i and n-i-1 */
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}

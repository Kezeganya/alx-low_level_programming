#include <unistd.h>

/**        
 * _putChar writes the character c to the stdout       
 * @c: the character to print       
 * Return: On success 1.                                             
 * On error, -1 is returned, and the error no. is set approriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
